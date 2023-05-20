#include "iter.hpp"

int	ft_pow(int val){
	return val * val;
}

int	main(void){
	int	numArr[5] = {0, 1, 2, 3, 4};
	::iter(numArr, 5, &ft_pow);
	for (int i = 0; i < 5; i++)
		std::cout << numArr[i] << std::endl;
	return 0;
}
