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

void	ScalarConverter::putChar(std::string input){
	if (input.length() == 1 && !isdigit(input[0])){
		std::cout << "char: '" << input[0] << "'" << std::endl;
	}
	else if (input.length() == 1 && isdigit(input[0])){
		std::cout << "char: Non displayable" << std::endl;
	}
	else{
		std::cout << "char: impossible" << std::endl;
	}
}

void	ScalarConverter::putNum(double d){
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void	ScalarConverter::Convert(std::string input){
	char	**endptr = NULL;
	double	d = strtod(input.c_str(), endptr);
	std::cout << d << std::endl;
	putChar(input);
	putNum(d);
}
