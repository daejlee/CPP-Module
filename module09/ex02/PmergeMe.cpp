#include "PmergeMe.hpp"

std::vector<unsigned int> PmergeMe::_vec;
std::deque<unsigned int>  PmergeMe::_deq;

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

void    PmergeMe::push_deq(char **args){
    int             testVal;
    unsigned int    val;

    for (int i = 0; args[i]; i++){
        testVal = std::atof(args[i]);
        if (testVal < 0)
            throw std::invalid_argument("Error: negative input");
        else if (testVal - std::atof(args[i]))
            throw std::invalid_argument("Error: not a integer");
        val = std::atof(args[i]);
        _deq.push_back(val);
    }
}

std::vector<unsigned int>    PmergeMe::recurSortVec(std::vector<unsigned int> vecToSort){
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
        largeVec = recurSortVec(largeVec);
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

std::deque<unsigned int>    PmergeMe::recurSortDeq(std::deque<unsigned int> deqToSort){
    std::deque<unsigned int>   smallDeq;
    std::deque<unsigned int>   largeDeq;

    for (std::deque<unsigned int>::const_iterator itr = deqToSort.begin(); itr < deqToSort.end(); itr += 2){
        if (itr + 1 == deqToSort.end())
            break ;
        else if (*itr > *(itr + 1)){
            largeDeq.push_back(*itr);
            smallDeq.push_back(*(itr + 1));
        }
        else{
            largeDeq.push_back(*(itr + 1));
            smallDeq.push_back(*itr);
        }
    }
    if (largeDeq.size() > 1)
        largeDeq = recurSortDeq(largeDeq);
    for (std::deque<unsigned int>::iterator itr = smallDeq.begin(); itr != smallDeq.end(); ++itr){
        std::deque<unsigned int>::iterator insertValItr = std::lower_bound(largeDeq.begin(), largeDeq.end(), *itr);
        largeDeq.insert(insertValItr, *itr);
    }
    if (deqToSort.size() % 2){
        std::deque<unsigned int>::iterator insertValItr = std::lower_bound(largeDeq.begin(), largeDeq.end(), *(deqToSort.end() - 1));
        largeDeq.insert(insertValItr, *(deqToSort.end() - 1));
    }
    return largeDeq;
}

void PmergeMe::launchVecSort(char **args){
    push_vec(args);
    std::vector<unsigned int>   ret = recurSortVec(_vec);
    std::cout << "Before:   ";
    for (std::vector<unsigned int>::iterator itr = _vec.begin(); itr != _vec.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "After:   ";
    for (std::vector<unsigned int>::iterator itr = ret.begin(); itr != ret.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl << "--------------------------------------------------------------------------------" << std::endl;
}

void PmergeMe::launchDequeSort(char **args){
    push_deq(args);
    std::deque<unsigned int>   ret = recurSortDeq(_deq);
    std::cout << "Before:   ";
    for (std::deque<unsigned int>::iterator itr = _deq.begin(); itr != _deq.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "After:   ";
    for (std::deque<unsigned int>::iterator itr = ret.begin(); itr != ret.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl << "--------------------------------------------------------------------------------" << std::endl;
}

unsigned int    PmergeMe::getVecSize(){return _vec.size();}

unsigned int    PmergeMe::getDeqSize(){return _deq.size();}
