#include "BitcoinExchange.hpp"

std::map<std::string, double>    BitcoinExchange::_dateRate;

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){*this = obj;}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange &obj){
    if (this != &obj)
        _dateRate = obj._dateRate;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){}

/*!
 * @brief
 * Inspect single "date | value" line, throw exception if data invalid.
 * @param dateBuf std::string date buffer
 * @param valBuf std::string value buffer
 */
void    BitcoinExchange::inspectData(std::string dateBuf, std::string valBuf){
    double val = std::atof(valBuf.c_str());
    std::stringstream   ss(dateBuf);
    std::string         token;
    int                 inspectionDate;

    if (dateBuf == valBuf)
        throw std::invalid_argument("Error: bad input => " + dateBuf);
    if (val < 0)
        throw std::out_of_range("Error: not a positive number.");
    else if (val > 1000)
        throw std::out_of_range("Error: too large number.");
    for (int i = 0; i < 3; i++){
        std::getline(ss, token, '-');
        inspectionDate = std::atoi(token.c_str());
        if (inspectionDate <= 0)
            throw std::invalid_argument("Error: not a positive number");
        else if ((std::atof(token.c_str()) - inspectionDate) || 
                (i == 1 && inspectionDate > 12) || 
                (i == 2 && inspectionDate > 31)){
            throw std::invalid_argument("Error: bad input => " + dateBuf);
        }
    }
}

/*!
 * @brief
 * Show exchanged rates on stdout.
 * @param inputStream std::ifstream of input.txt
 */
void    BitcoinExchange::display(std::ifstream& inputStream){
    std::string buf;
    std::string dateBuf;
    std::string valBuf;
    double      val;

    std::getline(inputStream, buf);
    if (buf.compare("date | value"))
        throw std::invalid_argument("Error: csv header missing.");

    while (!inputStream.eof()){
        std::getline(inputStream, buf);
        if (!buf[0])
            break ;
        dateBuf = buf.substr(0, buf.find('|'));
        valBuf = buf.substr(buf.find('|') + 1);
        try{
            inspectData(dateBuf, valBuf);
            val = std::atof(valBuf.c_str());
            if (_dateRate.find(dateBuf) != _dateRate.end())
                std::cout << dateBuf << " => " << val << " = " << _dateRate[dateBuf] * val << std::endl;
            else{
                std::map<std::string, double>::iterator it = _dateRate.upper_bound(dateBuf);
                if (it == _dateRate.begin())
                    throw std::out_of_range("Error: date too early! => " + dateBuf);
                it--;
                std::cout << dateBuf << " => " << val << " = " << it->second * val << std::endl;
            }
        }
        catch(std::exception &e){std::cerr << e.what() << std::endl;}
    }
}

/*!
 * @brief
 * Read data from data.csv and save it as std::map<string, double> form.
 * @param inputStream std::ifstream of data.csv
 */
std::map<std::string, double>   BitcoinExchange::readDB(std::ifstream& inputStream){
    std::string buf;
    std::string dateBuf;
    std::string rateBuf;
    double      val;
    std::map<std::string, double>   ret;

    std::getline(inputStream, buf);
    while (!inputStream.eof()){
        std::getline(inputStream, buf);
        if (!buf[0])
            break ;
        dateBuf = buf.substr(0, buf.find(','));
        rateBuf = buf.substr(buf.find(',') + 1);
        val = std::atof(rateBuf.c_str());
        ret[dateBuf] = val;
    }
    return ret;
}

/*!
 * @brief
 * Exchange input.txt with data.csv and display on stdout.
 * @param inputFileName file name of input ex.) input.txt
 */
void    BitcoinExchange::exchange(const char* inputFileName){
    std::ifstream   dataStream("data.csv");
    std::ifstream   inputStream(inputFileName);
    if (!dataStream.is_open() || !inputStream.is_open())
        throw std::runtime_error("Error: could not open file.");
    _dateRate = readDB(dataStream);
    display(inputStream);
}
