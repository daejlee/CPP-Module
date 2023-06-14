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
    if (n > _n)
        throw std::length_error("Exceeded span size!");
    std::vector<int>    vec_buf(n, 0);
    srand(time(NULL));
    std::generate(vec_buf.begin(), vec_buf.end(), rand);
    _vec = vec_buf;
    _n = n;
}

/*!
 * @brief
 * Find shortest span between all the numbers stored, and return it.
 * If there are no numbers stored,or only one, no span can be found. Thus, throw an exception.
 * @return Shortest span between all the numbers.
 */
int     Span::shortestSpan(){
    if (_vec.size() == 1 || _vec.size() == 0)
        throw std::out_of_range("Span doesn't have enough elements!");
    
    std::sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator  iter = _vec.begin() + 1;
    
    int    ret = std::abs(*iter - *(iter - 1));
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
int     Span::longestSpan(){
    if (_vec.size() == 1 || _vec.size() == 0)
        throw std::out_of_range("Span doesn't have enough elements!");

    std::sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator  iter = _vec.begin() + 1;
    
    int    ret = 0;
    while (iter != _vec.end()){
        if (std::abs(*iter - *(iter - 1)) > ret)
            ret = std::abs(*iter - *(iter - 1));
        iter++;
    }
    return ret;
}
