#include "PmergeMe.hpp"

std::vector<unsigned int> PmergeMe::_vec;

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& obj){*this = obj;}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj){
    if (this != &obj){
        this->_vec = obj._vec;
    }
    return *this;
}

PmergeMe::~PmergeMe(){}

void    PmergeMe::push_vec(char **args){
    int             testVal;
    unsigned int    val;

    for (int i = 0; args[i]; i++){
        testVal = std::atof(args[i]);
        if (testVal < 0)
            throw std::invalid_argument("Error: negative input");
        else if (testVal - std::atof(args[i]))
            throw std::invalid_argument("Error: not a integer");
        val = std::atof(args[i]);
        _vec.push_back(val);
    }
}

std::vector<unsigned int>    PmergeMe::push_pair(std::vector<unsigned int> vecToSort){
    std::vector<unsigned int>   smallVec;
    std::vector<unsigned int>   largeVec;

    for (std::vector<unsigned int>::const_iterator itr = vecToSort.begin(); itr < vecToSort.end(); itr += 2){
        if (itr + 1 == vecToSort.end())
            break ;
        else if (*itr > *(itr + 1)){
            largeVec.push_back(*itr);
            smallVec.push_back(*(itr + 1));
        }
        else{
            largeVec.push_back(*(itr + 1));
            smallVec.push_back(*itr);
        }
    }
    if (largeVec.size() > 1)
        largeVec = push_pair(largeVec);
    for (std::vector<unsigned int>::iterator itr = smallVec.begin(); itr != smallVec.end(); ++itr){
        std::vector<unsigned int>::iterator insertValItr = std::lower_bound(largeVec.begin(), largeVec.end(), *itr);
        largeVec.insert(insertValItr, *itr);
    }
    if (vecToSort.size() % 2){
        std::vector<unsigned int>::iterator insertValItr = std::lower_bound(largeVec.begin(), largeVec.end(), *(vecToSort.end() - 1));
        largeVec.insert(insertValItr, *(vecToSort.end() - 1));
    }
    return largeVec;
}

void PmergeMe::launchVecSort(char **args){
    push_vec(args);
    std::vector<unsigned int>   ret = push_pair(_vec);
    std::cout << "Before:   ";
    for (std::vector<unsigned int>::iterator itr = _vec.begin(); itr != _vec.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl;
    std::cout << "After:   ";
    for (std::vector<unsigned int>::iterator itr = ret.begin(); itr != ret.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl;
}

void PmergeMe::launchDequeSort(char **args){
    push_vec(args);
    std::vector<unsigned int>   ret = push_pair(_vec);
    std::cout << "Before:   ";
    for (std::vector<unsigned int>::iterator itr = _vec.begin(); itr != _vec.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl;
    std::cout << "After:   ";
    for (std::vector<unsigned int>::iterator itr = ret.begin(); itr != ret.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl;
}

unsigned int    PmergeMe::get_size(){
    return _vec.size();
}