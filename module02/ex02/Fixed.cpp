#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void)
{}

Fixed::Fixed(const Fixed &a)
{
	val = a.val;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Default constructor called" << std::endl;
	val = i << 8;
}

Fixed::Fixed(const float f)
{
	std::cout << "Default constructor called" << std::endl;
	val = roundf(f * 256);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(val) / 256.0f);
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(val >> 8));
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

std::ostream& operator<< (std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

bool	Fixed::operator< (const Fixed &a)
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator> (const Fixed &a)
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator<= (const Fixed &a)
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator>= (const Fixed &a)
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator== (const Fixed &a)
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!= (const Fixed &a)
{
	return (this->getRawBits() != a.getRawBits());
}

float	Fixed::operator+ (const Fixed &a, const Fixed &b)
{
	return (this->toFloat(a.val + b.val));
}

int		Fixed::operator- (const Fixed &a, const Fixed &b)
{
	return (this->toFloat(a.val - b.val));
}

int		Fixed::operator* (const Fixed &a)
int		Fixed::operator/ (const Fixed &a)