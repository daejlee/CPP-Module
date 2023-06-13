#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <iostream>
# include <vector>
# include <stdexcept>
# include <ctime>
# include <cstdlib>

class Span
{
private:
    unsigned int                _n;
    std::vector<int>            _vec;
public:
                                Span();
                                Span(unsigned int n);
                                Span(const Span &a);
                                ~Span();
    Span&                       operator=(const Span &a);
    void                        addNumber(int newVal);
    void                        fillSpan(unsigned int n);
    unsigned int                shortestSpan();
    unsigned int                longestSpan();
};

#endif