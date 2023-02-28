
#include <iostream>
#include <string>

int	main(void)
{
	std::string	string;
	std::string *stringPTR = &string;
	std::string	&stringREF = string;
	
	string = "HI THIS IS BRAIN";
	std::cout << "The memory address of string is		" << &string << std::endl;
	std::cout << "The memory address of stringPTR is	" << &stringPTR << std::endl;
	std::cout << "The memory address of stringREF is	" << &stringREF << std::endl;
	std::cout << "The value of string is			" << string << std::endl;
	std::cout << "The value pointed by stringPTR is	" << stringPTR << std::endl;
	std::cout << "The value pointed by stringREF is	" << stringREF << std::endl;
	return (0);
}
