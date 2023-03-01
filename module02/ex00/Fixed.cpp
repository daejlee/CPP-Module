#include "Fixed.hpp"

Fixed::Fixed(void)
{
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	val = a.val;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	val = a.val;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}