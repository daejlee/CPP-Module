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
        static std::map<std::string, double>    _dateRate;
                                                BitcoinExchange();
                                                BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange&                        operator=(const BitcoinExchange &obj);
                                                ~BitcoinExchange();
    public:
        static std::map<std::string, double>    readDB(std::ifstream &s);
        static void                             display(std::ifstream& s);
        static void                             inspectData(std::string date, std::string value);
        static void                             exchange(const char* inputFileName);
};

#endif