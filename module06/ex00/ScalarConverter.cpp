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

/*!
 * @brief
 * Takes raw std::string input and convert it to char type and prints it
 * @param input raw std::string input
 */
void	ScalarConverter::putChar(std::string input){
	if (input.length() == 1 && isalpha(input[0])){
		std::cout << "char: '" << input[0] << "'" << std::endl;
	}
	else if (input.length() == 1 && !isalpha(input[0])){
		std::cout << "char: Non displayable" << std::endl;
	}
	else{
		double d = strtod(input.c_str(), NULL);
		if (d == HUGE_VAL || d == -HUGE_VAL || isnan(d))
			std::cout << "char: " << "impossible" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
	}
}

/*!
 * @brief
 * Takes double type arg and converts it to int, float, double type and prints it
 * @param d double type arg needs to be converted
 */
void	ScalarConverter::putNum(double d){
	if (d == HUGE_VAL || d == -HUGE_VAL || isnan(d))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

/*!
 * @brief
 * Takes std::string input and launch putChar, putNum
 * @param input raw std::string input
 */
void	ScalarConverter::Convert(std::string input){
	double	d = strtod(input.c_str(), NULL);
	putChar(input);
	putNum(d);
}
