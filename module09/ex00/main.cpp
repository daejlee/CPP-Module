#include "BitcoinExchange.hpp"

/*
  static const char* OPEN_ERROR_MSG;
  static const char* ARG_AMOUNT_ERROR_MSG;
  static const char* DATE_INVALID_FORMAT;
  static const char* INVALID_DOUBLE_ERROR;
  static const char* INVALID_LEAP_YEAR_ERROR;
  static const char* CSV_STARTLINE_ERROR;
  static const char* DATE_OVERLAP_ERROR;
  static const char* INVALID_DELIMITER;
  static const char* DATA_STARTLINE_ERROR;
  static const char* BAD_INPUT_ERROR;
  static const char* NOT_POSITIVE_ERROR;
  static const char* TOO_LARGENUM_ERROR;
  static const char* DATE_TOO_EARLY;
*/
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
