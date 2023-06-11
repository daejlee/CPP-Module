#include "iter.hpp"

template <typename T>
void	ft_print(T const &a){
	std::cout << a << std::endl;
}

int main( void ) {   
    {
        std::cout << "[ 1 ]--------------------------------------------" << std::endl;
        int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ::iter(arr1, 10, ft_print);
        std::cout << std::endl;
    }
    {
        std::cout << "[ 2 ]--------------------------------------------" << std::endl;
        char arr2[7] = {'a','b','c','d','e','f','g'};
        ::iter(arr2, 7, ft_print);
        std::cout << std::endl;
    }
    {
        std::cout << "[ 3 ]--------------------------------------------" << std::endl;
        std::string arr3[7]={"hello","my","name","is","topdae","topdae","yo"};
        ::iter(arr3, 7, ft_print);
        std::cout << std::endl;
    }
    return 0;
}