#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brainPointer = new Brain;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	delete(brainPointer);
}

Dog::Dog(const Dog &a) : Animal(a)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = a.type;
	this->brainPointer = new Brain;
	*this->brainPointer = *a.brainPointer;
}

Dog&	Dog::operator= (const Dog &a)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

const Brain*	Dog::getBP(void) const
{
	return (brainPointer);
}

void	Dog::makeSound(void) const
{
	std::cout << "* WOOF WOOF *" << std::endl;
}
