#include "BitcoinExchange.hpp"

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
