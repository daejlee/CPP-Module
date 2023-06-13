#include "span.hpp"

Span::Span() : _n(0) {std::cout << "Span default constructor called" << std::endl;}

Span::Span(unsigned int n) : _n(n) {
    std::cout << "Span input constructor called, span size is " << n << std::endl;
}

Span::Span(const Span &a){
    std::cout << "Span copy constructor called" << std::endl;
    *this = a;
}

Span&   Span::operator=(const Span &a){
    std::cout << "Span assignment operator overloading called" << std::endl;
    if (this != &a){
        _n = a._n;
        _vec = a._vec;
    }
    return *this;
}

Span::~Span(){std::cout << "Span destructor called" << std::endl;}

/*!
 * @brief
 * Add single number to Span.
 * Any attemp to add a new element if there are already N elements stored throw an exception.
 * @param new_val new integer element to add
 */
void    Span::addNumber(int newVal){
    if (_vec.size() <= _n)
        _vec.push_back(newVal);
    else
        throw std::length_error("Exceeded span size!");
}

/*!
 * @brief
 * Fill Span with n random interger values.
 * Throw exception if n exceeds Span size.
 * @param n number of integer value to fill the Span with.
 */
void    Span::fillSpan(unsigned int n){
    if (n > _n - _vec.size())
        throw std::length_error("Exceeded span size!");
    int* arr = new int[n];
    srand(time(NULL));
    for (unsigned int i = 0; i < n; i++)
        arr[i] = rand();
    _vec.insert(_vec.end(), arr, arr + n);
    delete [] arr;
}

/*!
 * @brief
 * Find shortest span between all the numbers stored, and return it.
 * If there are no numbers stored,or only one, no span can be found. Thus, throw an exception.
 * @return Shortest span between all the numbers.
 */
unsigned int     Span::shortestSpan(){
    if (_vec.size() == 1 || _vec.size() == 0)
        throw std::out_of_range("Span doesn't have enough elements!");
    
    std::sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator  iter = _vec.begin() + 1;
    
    unsigned int    ret = *iter - *(iter - 1);
    while (iter != _vec.end()){
        if (std::abs(*iter - *(iter - 1)) < ret)
            ret = std::abs(*iter - *(iter - 1));
        iter++;
    }
    return ret;
}

/*!
 * @brief
 * Find longest span between all the numbers stored, and return it.
 * If there are no numbers stored,or only one, no span can be found. Thus, throw an exception.
 * @return Longest span between all the numbers.
 */
unsigned int     Span::longestSpan(){
    if (_vec.size() == 1 || _vec.size() == 0)
        throw std::out_of_range("Span doesn't have enough elements!");

    std::sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator  iter = _vec.begin() + 1;
    
    unsigned int    ret = 0;
    while (iter != _vec.end()){
        if (std::abs(*iter - *(iter - 1)) > ret)
            ret = std::abs(*iter - *(iter - 1));
        iter++;
    }
    return ret;
}
