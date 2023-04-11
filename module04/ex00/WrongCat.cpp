#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = a;
}

WrongCat&	WrongCat::operator= (const WrongCat &a)
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	type = a.type;
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	std::cout << "WrongCat getType member function called." << std::endl;
	return (type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* WRONG MEOWING SOUND *" << std::endl;
}
