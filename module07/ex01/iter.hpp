#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	ft_print(T const &a){
	std::cout << a << std::endl;
}

template <typename T>
void iter(const T *arrAddress, const unsigned int arrLength, void (*func)(const T&)){
	for (unsigned int i = 0; i < arrLength; i++)
		func(arrAddress[i]);
}

template <typename T>
void iter(T *arrAddress, const unsigned int arrLength, void (*func)(T&)){
	for (unsigned int i = 0; i < arrLength; i++)
		func(arrAddress[i]);
}

#endif
