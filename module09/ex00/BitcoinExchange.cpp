#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){std::cout << "Default BitcoinExchange constructor called." << std::endl;}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){
    std::cout << "Default BitcoinExchange copy constructor called." << std::endl;
    *this = obj; 
}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange &obj){
    std::cout << "BitcoinExchange assigmnent operator overloading called" << std::endl;
    if (this != &obj)
        _dateRate = obj._dateRate;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){std::cout << "BitcoinExchange destructor called." << std::endl;}


/*
- 파일 안의 각 줄은 다음 포맷을 따라야 한다: `"date | value"`
- 유효한 날짜는 언제나 다음 포맷에 존재해야 한다: `Year-Month-Day`
- 유효한 값은 0과 1000사이의 float 혹은 양의 정수여야 한다.
- 2009-01-02(| or ,)45144.79
    - year:     > 0
    - month:    01 ~ 12
    - day:      01 ~ 31
    - rate:     >= 0
*/

bool    BitcoinExchange::inspectData(std::string date, double value){
    std::stringstream   ss(date);
    std::string         token;
    double              doubleBuf;
    int                 inspectionDate;
    char                **endptr = NULL;

    if (value < 0){
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (value > 1000){
        std::cout << "Error: too large number." << std::endl;
        return false;
    }
    for (int i = 0; i < 3; i++){
        std::getline(ss, token, '-');
        doubleBuf = strtod(token.c_str(), endptr);
        inspectionDate = static_cast<int>(doubleBuf);
        if (doubleBuf <= 0){
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
    return true;
}

std::string TrimWhitespace(const std::string& str)
{
    std::string result = str;

    // 문자열의 앞부분의 공백 문자 제거
    std::string::size_type start = 0;
    while (start < result.length() && std::isspace(result[start]))
        start++;
    result.erase(0, start);

    // 문자열의 뒷부분의 공백 문자 제거
    std::string::size_type end = result.length() - 1;
    while (end >= 0 && std::isspace(result[end]))
        end--;
    result.erase(end + 1);

    return result;
}


void   BitcoinExchange::display(std::ifstream& s){
    char        arr[256];
    std::string date;
    double      value;
    char        **endptr = NULL;
    char        *buf;

    s.getline(arr, 256);
    while (!s.eof()){
        s.getline(arr, 256);
        if (!arr[0])
            break ;
        date = strtok(arr, "|");
        date = TrimWhitespace(date);
        buf = strtok(NULL, "|");
        if (!buf)
            std::cerr << "Error: bad input => " << date << std::endl;
        else{
            value = strtod(buf, endptr);
            if (inspectData(date, value)){
                std::cout << date << " => " << value << " = ";
                if (_dateRate.find(date) != _dateRate.end())
                    std::cout << _dateRate[date] * value << std::endl;
                else{
                    _dateRate[date] = 0;
                    std::map<std::string, double>::iterator it = _dateRate.upper_bound(date);
                    if (it == _dateRate.begin())
                        std::cerr << "Error: date too early => " << date << std::endl;
                    else
                        std::cout << it->second * value << std::endl;
                    _dateRate.erase(_dateRate.find(date));
                }
            }
        }
    }
}

std::map<std::string, double>   BitcoinExchange::readDB(std::ifstream& s){
    char        arr[256];
    std::string date;
    double      value;
    char        **endptr = NULL;
    std::map<std::string, double>   ret;

    s.getline(arr, 256);
    while (!s.eof()){
        s.getline(arr, 256);
        if (!arr[0])
            break ;
        date = strtok(arr, ",");
        value = strtod(strtok(NULL, ","), endptr);
        ret[date] = value;
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
