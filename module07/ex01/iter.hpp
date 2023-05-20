#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *arrAddress, const unsigned int arrLength, T (*func)(T)){
	for (unsigned int i = 0; i < arrLength; i++)
		arrAddress[i] = func(arrAddress[i]);
}

#endif
