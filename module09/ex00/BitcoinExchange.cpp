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
 * Inspect value from "date | value" line, throw exception if data invalid.
 * @param valBuf std::string value buffer
 */
void    BitcoinExchange::inspectVal(std::string valBuf){
    bool    dotFlag = false;
    if (valBuf[0] == '.')
        throw std::invalid_argument("Error: value starts with dot.");
    for (size_t i = 0; i < valBuf.size(); i++){
        if (valBuf[i] == '.' && dotFlag == true)
            throw std::invalid_argument("Error: more than one dot in value.");
        else if (valBuf[i] == '.')
            dotFlag = true;
        else if (!isdigit(valBuf[i]))
            throw std::invalid_argument("Error: non-number exists in value.");
    }
    double val = std::atof(valBuf.c_str());
    if (val < 0)
        throw std::out_of_range("Error: not a positive number.");
    else if (val > 1000)
        throw std::out_of_range("Error: too large number.");
}

/*!
 * @brief
 * Inspect date from "date | value" line, throw exception if data invalid.
 * @param dateBuf std::string date buffer
 */
void    BitcoinExchange::inspectDate(std::string dateBuf){
    std::stringstream   ss(dateBuf);
    std::string         token;
    int                 year;
    int                 month;
    int                 day;

    if (dateBuf.size() != 10 || dateBuf[4] != '-' || dateBuf[7] != '-')
        throw std::invalid_argument("Error: bad input => " + dateBuf);
    for (int i = 0; i < 10; i++){
        if (i != 4 && i != 7 && !isdigit(dateBuf[i]))
            throw std::invalid_argument("Error: bad input => " + dateBuf);}
    
    std::getline(ss, token, '-');
    year = std::atoi(token.c_str());
    std::getline(ss, token, '-');
    month = std::atoi(token.c_str());
    std::getline(ss, token, '-');
    day = std::atoi(token.c_str());
    
    if (month > 12 || day > 31)
        throw std::invalid_argument("Error: bad input => " + dateBuf);
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        throw std::invalid_argument("Error: invalid date => " + dateBuf);
    else if (month == 2){
		if (year % 400 == 0 && day > 29)
				throw(std::invalid_argument("Error: invalid date(leap year) => " + dateBuf));
		else if (year % 100 == 0 && day > 28)
				throw(std::invalid_argument("Error: invalid date(leap year) => " + dateBuf));
		else if (year % 4 == 0 && day > 29)
				throw(std::invalid_argument("Error: invalid date(leap year) => " + dateBuf));
		else if (day > 28)
            throw(std::invalid_argument("Error: invalid date(leap year) => " + dateBuf));
    }
}

/*!
 * @brief
 * Inspect single "date | value" line, throw exception if data invalid.
 * @param dateBuf std::string date buffer
 * @param valBuf std::string value buffer
 */
void    BitcoinExchange::inspectData(std::string dateBuf, std::string valBuf){
    if (dateBuf == valBuf)
        throw std::invalid_argument("Error: bad input => " + dateBuf);
    inspectDate(dateBuf);
    inspectVal(valBuf);
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
        dateBuf = buf.substr(0, buf.find('|') - 1);
        valBuf = buf.substr(buf.find('|') + 2);
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
 * @return std::map of DB that has been read
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
    std::ifstream   dataStream("./data.csv");
    std::ifstream   inputStream(inputFileName);

    if (!dataStream.is_open() || !inputStream.is_open()){
        dataStream.close();
        inputStream.close();
        throw std::runtime_error("Error: could not open file.");
    }
    _dateRate = readDB(dataStream);
    try{display(inputStream);}
    catch(std::exception &e){std::cerr << e.what() << std::endl;}
    dataStream.close();
    inputStream.close();
}
