#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	ScalarConverter	c;
	c.Convert(argv[1]);
	return (0);
}
