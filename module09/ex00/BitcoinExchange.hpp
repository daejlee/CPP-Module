#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <string>
# include <exception>
# include <stdexcept>
# include <iostream>
# include <fstream>
# include <cstring>

/*
1.  import data and save date, exchange rate as map
2.  import input and save date, value as map
3.  convert and print based on input
---------------------------------------------------------
for every step, handle errors !!
*/

class BitcoinExchange
{
    private:
        std::map<std::string, double>   _dateRate;
        std::map<std::string, double>   _dateValue;
    public:
                                        BitcoinExchange();
                                        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange&                operator=(const BitcoinExchange &obj);
                                        ~BitcoinExchange();
        void                            getData(std::string input);
        std::map<std::string, double>   readFile(std::ifstream &s, const char* delimeter);
};

#endif