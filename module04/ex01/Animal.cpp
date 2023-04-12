#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called." << std::endl;
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

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* RANDOM ANIMAL SOUND *" << std::endl;
}
