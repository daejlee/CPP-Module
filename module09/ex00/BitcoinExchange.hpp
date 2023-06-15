#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <string>
# include <exception>
# include <stdexcept>
# include <iostream>
# include <fstream>
# include <cstring>
# include <sstream>

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
    public:
                                        BitcoinExchange();
                                        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange&                operator=(const BitcoinExchange &obj);
                                        ~BitcoinExchange();
        std::map<std::string, double>   readDB(std::ifstream &s);
        void                            display(std::ifstream& s);
        bool                            inspectData(std::string date, double value);
        void                            exchange(std::string input);
};

#endif