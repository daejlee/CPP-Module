#include "ScalarConverter.hpp"
#include <limits>

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

/*!
 * @brief
 * Takes double type arg and converts it to int, float, double type and prints it
 * @param d double type arg needs to be converted
 */
void	ScalarConverter::putNum(double d, char *endptr){
	if (endptr[0] != 'f' && endptr[0] != 0){
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	else{
		if (d > 2147483647 || d < -2147483648)
			std::cout << "int: " << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d);
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(d);
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

/*!
 * @brief
 * Takes std::string input and converts it
 * @param input raw std::string input
 */
void	ScalarConverter::Convert(std::string input){
	char	*endptr;
	double	d = strtod(input.c_str(), &endptr);
	if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0])){
		std::cout << "char: '" << input[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
		return ;
	}
	else if (input.length() == 1 && !isprint(input[0]))
		std::cout << "char: Non displayable" << std::endl;
	else if (d > 2147483647 || d < -2147483648 || d != d)
		std::cout << "char: " << "impossible" << std::endl;
	else if (isprint(d))
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	putNum(d, endptr);
}