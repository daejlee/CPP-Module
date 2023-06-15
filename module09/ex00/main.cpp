#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "invalid parameter" << std::endl;
        return 0;
    }
    BitcoinExchange Bob;
    argc = 0;
    Bob.exchange(argv[1]);

    return 0;
}
