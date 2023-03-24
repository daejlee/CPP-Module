#include "Fixed.hpp"

Fixed::Fixed(void)
{
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	val = i << 8;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	val = roundf(f * 256);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	val = a.getRawBits();
}

Fixed& Fixed::operator= (const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	val = a.getRawBits();
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(val) / 256);
}

int		Fixed::toInt(void) const
{
	return (roundf(static_cast<float>(val) / 256));
}

std::ostream& operator<< (std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return (out);
}
