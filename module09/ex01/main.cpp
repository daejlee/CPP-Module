#include "RPN.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "invalid parameter" << std::endl;
        return 0;
    }
    argc = 0;
    RPN R;
    R.calc(argv[1]);
    return 0;
}
