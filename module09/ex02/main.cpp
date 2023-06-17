#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2){
        std::cout << "invalid parameter" << std::endl;
        return 0;
    }
    argc = 0;
    time_t  start, end;
    double  result;
    PmergeMe    A;
    try{
        start = clock();
        A.launchVecSort(argv + 1);
        end = clock();
        result = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
        std::cout << "Time to process a range of " << A.getVecSize() << " elements with std::vector : " << result << "ms" << std::endl;
        start = clock();
        A.launchDequeSort(argv + 1);
        end = clock();
        result = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
        std::cout << "Time to process a range of " << A.getDeqSize() << " elements with std::deque : " << result << "ms" << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
