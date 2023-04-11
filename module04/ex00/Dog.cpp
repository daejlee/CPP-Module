#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &a) : Animal()
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = a;
}

Dog&	Dog::operator= (const Dog &a)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "* WOOF WOOF *" << std::endl;
}
