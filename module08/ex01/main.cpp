#include "span.hpp"
#include <iostream>

int main(){
    Span sp = Span(10000);
    Span buf_sp;

    sp.fillSpan();
    
    buf_sp = sp;

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << buf_sp.shortestSpan() << std::endl;
    std::cout << buf_sp.longestSpan() << std::endl;
    return 0;
}