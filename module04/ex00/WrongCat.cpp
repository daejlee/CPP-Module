#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a)
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

void	WrongCat::makeSound(void) const
{
	std::cout << "* WOEM WOEM *" << std::endl;
}
