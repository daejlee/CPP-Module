#include "Converter.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << std::endl;
		return (0);
	}
	Converter c;
	c.Convert(argv[1]);
	return (0);
}
