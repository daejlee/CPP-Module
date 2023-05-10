#include "Converter.hpp"

Converter::Converter(void){}

Converter::Converter(const Converter& a){
    if (this != &a){
        ;
    }
}

Converter&  Converter::operator=(const Converter& a){
    if (this != &a){
        ;
    }
    return (*this);
}

Converter::~Converter(void){}

void    Converter::Convert(std::string input){
}