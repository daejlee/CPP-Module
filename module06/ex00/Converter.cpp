#include "Converter.hpp"
#include <iomanip>

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

//function that converts a string into a matching type and displays it (char, int, float, double) or displays an error message if it is not possible. Non displayable char are replaced by a dot. If the conversion is not possible, it displays "impossible". If the conversion creates an overflow, it displays "impossible". If the argument passed to the program is not a valid number, it displays "impossible". All the conversions, even the ones that seem to work, are followed by a newline. If the number of arguments is not 1, the program displays a newline.
void	Converter::Convert(std::string input){
	std::cout << "char: ";
	try{
		char c = static_cast<char>(std::stoi(input));
		if (c < 32 || c > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
	std::cout << "int: ";
	try{
		int i = static_cast<int>(std::stoi(input));
		std::cout << i << std::endl;
	}
	catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float: ";
	try{
		float f = static_cast<float>(std::stof(input));
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
	std::cout << "double: ";
	try{
		double d = static_cast<double>(std::stod(input));
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception &e){
		std::cout << "impossible" << std::endl;
	}
}
