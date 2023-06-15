#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){std::cout << "Default BitcoinExchange constructor called." << std::endl;}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){
    std::cout << "Default BitcoinExchange copy constructor called." << std::endl;
    *this = obj; 
}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange &obj){
    std::cout << "BitcoinExchange assigmnent operator overloading called" << std::endl;
    if (this != &obj){
        _dateRate = obj._dateRate;
        _dateValue = obj._dateValue;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange(){std::cout << "BitcoinExchange destructor called." << std::endl;}

void print_map(std::map<std::string, double>& m) {
  for (std::map<std::string, double>::iterator itr = m.begin(); itr != m.end(); ++itr) {
    std::cout << itr->first << " " << itr->second << std::endl;
  }
}

std::map<std::string, double>   BitcoinExchange::readFile(std::ifstream& s, const char* delimeter){
    char    arr[256];
    std::string date;
    double      value;
    char        **endptr = NULL;
    std::map<std::string, double>   ret;
    s.getline(arr, 256);
    while (!s.eof()){
        s.getline(arr, 256);
        if (!arr[0])
            break ;
        date = strtok(arr, delimeter);
        value = strtod(strtok(NULL, delimeter), endptr);
        // if (ERR)
        //     throw ;
        ret[date] = value;
    }
    print_map(ret);
    return ret;
}

void    BitcoinExchange::getData(std::string input){
    std::ifstream   dataStream("dummy.csv");
    std::ifstream   inputStream(input);
    if (!dataStream || !inputStream){
        std::cout << "Error: could not open file." << std::endl;
    }
    _dateRate = readFile(dataStream, ",");
    _dateValue = readFile(inputStream, "|");
}
