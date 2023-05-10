#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>

class Converter{
    private:
    public:
                    Converter(void);
                    Converter(const Converter& a);
        Converter&  operator=(const Converter& a);
                    ~Converter(void);
        void        Convert(std::string input);
}

#endif