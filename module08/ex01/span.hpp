#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <iostream>
# include <vector>

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
    unsigned int                shortestSpan();
    unsigned int                longestSpan();
};

#endif