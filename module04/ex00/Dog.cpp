#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called." << std::endl;
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

void	Dog::makeSound(void)
{
	std::cout << "* BARKING SOUND *" << std::endl;
}
