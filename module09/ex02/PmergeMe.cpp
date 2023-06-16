#include "PmergeMe.hpp"

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
    std::string val_buf;
    int         val;

    for (int i = 0; args[i]; i++){
        val_buf = args[i];
        val = std::stoi(val_buf);
        if (val < 0)
            throw std::invalid_argument("Error: negative input");
        _vec.push_back(val);
    }
}

void    PmergeMe::push_pair(){
    for (unsigned int i = 0; i < _vec.size() - 1; i += 2){
        if (_vec[i] > _vec[i + 1])
            _pairVec.push_back(std::make_pair(_vec[i + 1], _vec[i]));
        else
            _pairVec.push_back(std::make_pair(_vec[i], _vec[i + 1]));
    }
}

void PmergeMe::launchSort(char **args){
    push_vec(args);
    push_pair();
    std::cout << "Before:   ";
    for (std::vector<int>::iterator itr = _vec.begin(); itr != _vec.end(); ++itr) {
        std::cout << *itr << " ";
    }
}
