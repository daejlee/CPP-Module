
#include <iostream>
#include <string>

int	main(void)
{
	std::string	buf;
	std::string *stringPTR = &buf;
	std::string	&stringREF = buf;
	
	buf = "HI THIS IS BRAIN";
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
