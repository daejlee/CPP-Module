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
	const Animal*	arr[4];

	for (int i = 0; i < 2; i++)
		arr[i] = new Dog();
	for (int i = 2; i < 4; i++)
		arr[i] = new Cat();
	arr[0]->makeSound();
	arr[2]->makeSound();
	std::cout << "------------deep copy test start------------" << std::endl;
	const Dog	original_dog;
	const Dog	copy_dog(original_dog);
	std::cout << "original obj adr	: " << &original_dog << std::endl;
	std::cout << "copied obj adr		: " << &copy_dog << std::endl; 
	std::cout << "original_brain		: " << original_dog.getBP() << std::endl;
	std::cout << "copied_brain		: " << copy_dog.getBP() << std::endl;
	std::cout << "------------deep copy test end------------" << std::endl;
	for (int i = 0; i < 4; i++)
		delete arr[i];
	std::cout << "------------additional test end------------" << std::endl;
	return (0);
}
