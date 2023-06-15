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
 * Generate single integer number.
 * @param ret integer that generated
 */
int  Span::getRandomNumber(){
    int ret = rand();
    if (ret % 2)
        ret *= -1;
    return (ret);
}

/*!
 * @brief
 * Fill Span with random interger values.
 */
void    Span::fillSpan(){
    std::vector<int>    vec_buf(_n, 0);
    srand(time(NULL));
    std::generate(vec_buf.begin(), vec_buf.end(), getRandomNumber);
    _vec = vec_buf;
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
    
    int    ret = std::abs(*iter - *(iter - 1));
    while (iter != _vec.end()){
        if (std::abs(*iter - *(iter - 1)) < ret)
            ret = std::abs(*iter - *(iter - 1));
        iter++;
    }
    return static_cast<unsigned int>(ret);
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
    unsigned int ret = *(_vec.end() - 1) - *_vec.begin();
    return ret;
}
