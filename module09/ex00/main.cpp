#include "BitcoinExchange.hpp"

// const char* BitcoinExchange::ARG_AMOUNT_ERROR_MSG = "Error: argument must be only one!!\n";
// const char* BitcoinExchange::INVALID_DOUBLE_ERROR = "Error: Not double type\n";
// const char* BitcoinExchange::INVALID_LEAP_YEAR_ERROR = "Error: wrong in leap years\n";
// const char* BitcoinExchange::DATE_OVERLAP_ERROR = "Error: The dates overlap!!\n";

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "invalid parameter" << std::endl;
        return 0;
    }
    argc = 0;
    try{BitcoinExchange::exchange(argv[1]);}
    catch(std::exception &e){std::cerr << e.what() << std::endl;}
    return 0;
}
