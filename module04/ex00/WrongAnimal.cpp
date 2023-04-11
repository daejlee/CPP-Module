#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
	type = "random WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = a;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* RANDOM WrongAnimal SOUND *" << std::endl;
}
