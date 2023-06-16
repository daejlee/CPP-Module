#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <string>
# include <exception>
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <fstream>
# include <cstring>
# include <sstream>

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
        void                            inspectData(std::string date, std::string value);
        void                            exchange(const char* inputFileName);
};

#endif