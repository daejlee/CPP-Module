#include "Array.hpp"

int	main(void){
	Array<int>	A(5);
	std::cout << A[1] << std::endl;
	try{
		std::cout << A[-1] << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
