#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter& a){
	if (this != &a){
		;
	}
}

ScalarConverter&  ScalarConverter::operator=(const ScalarConverter& a){
	if (this != &a){
		;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter(void){}

void	ScalarConverter::print(double d){
	std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (d == HUGE_VAL || d == -HUGE_VAL || isnan(d))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void	ScalarConverter::Convert(std::string input){
	double	d = strtod(input.c_str(), NULL);
	print(d);
}
