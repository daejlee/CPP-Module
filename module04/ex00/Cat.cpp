#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &a) : Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = a;
}

Cat&	Cat::operator= (const Cat &a)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "* MEOWING SOUND *" << std::endl;
}
