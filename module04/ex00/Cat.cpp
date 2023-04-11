#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called." << std::endl;
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

std::string	Cat::getType(void) const
{
	return (type);
}

void	Cat::makeSound(void) const
{
	std::cout << "* MEOW MEOW *" << std::endl;
}
