#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called." << std::endl;
	type = "random animal";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

Animal&	Animal::operator= (const Animal &a)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "* RANDOM ANIMAL SOUND *" << std::endl;
}
