#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	leaks()
{
	system("leaks Brain");
}

int	main()
{
	std::cout << "------------Subject PDF test start------------" << std::endl;
	const Animal*	i = new Dog();
	const Animal*	j = new Cat();
	atexit(leaks);

	delete i;
	delete j;
	std::cout << "------------Subject PDF test end------------" << std::endl;
	std::cout << "------------additional test start------------" << std::endl;
	const Animal*	arr[10];

	for (int i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (int i = 5; i < 10; i++)
		arr[i] = new Cat();
	std::cout << "------------deep copy test start------------" << std::endl;
	const Animal*	copied(arr[0]);
	std::cout << "original obj adr	: " << arr[0] << std::endl;
	std::cout << "copied obj adr		: " << copied << std::endl; 
	std::cout << "------------deep copy test end------------" << std::endl;
	for (int i = 0; i < 10; i++)
		delete arr[i];
	delete(copied);
	std::cout << "------------additional test end------------" << std::endl;
	return (0);
}
