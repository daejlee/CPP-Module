#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2){
        std::cout << "invalid parameter" << std::endl;
        return 0;
    }
    argc = 0;
    PmergeMe R;
    try{
        R.launchSort(argv + 1);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
