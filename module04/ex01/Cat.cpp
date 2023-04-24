#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
	brainPointer = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	delete(brainPointer);
}

Cat::Cat(const Cat &a) : Animal(a)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->brainPointer = new Brain();
	*this = a;
}

Cat&	Cat::operator= (const Cat &a)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &a)
	{
		this->type = a.type;
		*this->brainPointer = *a.brainPointer;
	}
	return (*this);
}

const Brain*	Cat::getBP(void) const
{
	return (brainPointer);
}

void	Cat::makeSound(void) const
{
	std::cout << "* MEOW MEOW *" << std::endl;
}
