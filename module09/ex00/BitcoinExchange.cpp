#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){*this = obj;}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange &obj){
    if (this != &obj)
        _dateRate = obj._dateRate;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){}


/*
- 파일 안의 각 줄은 다음 포맷을 따라야 한다: `"date | value"`
- 유효한 날짜는 언제나 다음 포맷에 존재해야 한다: `Year-Month-Day`
- 유효한 값은 0과 1000사이의 float 혹은 양의 정수여야 한다.
- 2009-01-02(| or ,)45144.79
    - year:     > 0
    - month:    01 ~ 12
    - day:      01 ~ 31
    - rate:     >= 0
    - leapyear  feb
    - 
*/

bool    BitcoinExchange::inspectData(std::string date, std::string value){
    std::stringstream   ss(date);
    std::string         token;
    int                 inspectionDate;

    for (int i = 0; i < 3; i++){
        std::getline(ss, token, '-');
        inspectionDate = std::stoi(token);
        if (inspectionDate <= 0){
            std::cout << "Error: not a positive number." << std::endl;
            return false;
        }
        else if ((doubleBuf - inspectionDate) || 
                (i == 1 && inspectionDate > 12) || 
                (i == 2 && inspectionDate > 31)){
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }
    }
    double val = std::stod(value);
    if (val < 0){
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (val > 1000){
        std::cout << "Error: too large number." << std::endl;
        return false;
    }
    return true;
}

void   BitcoinExchange::display(std::ifstream& s){
    std::string buf;
    std::string dateBuf;
    std::string valueBuf;
    double      value;
    char        *buf;

    std::getline(s, buf);
    if (buf.compare("date | value"))
        throw std::invalid_argument("Error: csv header missing.");
    while (!s.eof()){
        std::getline(s, buf);
        if (!buf[0])
            break ;
        dateBuf = buf.substr(0, buf.find(','));
        valueBuf = buf.substr(buf.find(',') + 1);
        inspectData(dateBuf, valueBuf);
        value = std::stod(valueBuf);
        std::cout << date << " => " << value << " = ";
        if (_dateRate.find(dateBuf) != _dateRate.end())
            std::cout << _dateRate[dateBuf] * value << std::endl;
        else{
            _dateRate[dateBuf] = 0;
            std::map<std::string, double>::iterator it = _dateRate.upper_bound(dateBuf);
            if (it == _dateRate.begin())
                throw std::out_of_range("Error: date too early!");
            else
                std::cout << it->second * value << std::endl;
            _dateRate.erase(_dateRate.find(dateBuf));
        }
    }
}

std::map<std::string, double>   BitcoinExchange::readDB(std::ifstream& s){
    std::string buf;
    std::string dateBuf;
    std::string rateBuf;
    double      value;
    std::map<std::string, double>   ret;

    std::getline(s, buf);
    while (!s.eof()){
        std::getline(s, buf);
        if (!buf[0])
            break ;
        dateBuf = buf.substr(0, buf.find(','));
        rateBuf = buf.substr(buf.find(',') + 1);
        value = std::stod(rateBuf);
        ret[dateBuf] = value;
    }
    return ret;
}

void    BitcoinExchange::exchange(std::string input){
    std::ifstream   dataStream("data.csv");
    std::ifstream   inputStream(input);
    if (!dataStream || !inputStream){
        std::cout << "Error: could not open file." << std::endl;
        return ;
    }
    _dateRate = readDB(dataStream);
    display(inputStream);
}
