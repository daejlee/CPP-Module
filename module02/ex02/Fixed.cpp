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
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(val) / 256.0f);
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(val >> 8));
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

float	Fixed::operator+ (const Fixed &a)
{
	return (this->toFloat() + a.toFloat());
}

float	Fixed::operator- (const Fixed &a)
{
	return (this->toFloat() - a.toFloat());
}

float	Fixed::operator* (const Fixed &a)
{
	return (this->toFloat() * a.toFloat());
}

float	Fixed::operator/ (const Fixed &a)
{
	return (this->toFloat() / a.toFloat());
}

float	Fixed::operator++ (void)
{
	this->val += 1;
	return (this->toFloat());
}

float	Fixed::operator++ (int)
{
	float	temp = this->toFloat();
	this->val += 1;
	return (temp);
}

float	Fixed::operator-- (void)
{
	this->val -= 1;
	return (this->toFloat());
}

float	Fixed::operator-- (int)
{
	float	temp = this->toFloat();
	this->val -= 1;
	return (temp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.val < b.val)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.val < b.val)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.val > b.val)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.val > b.val)
		return (a);
	else
		return (b);
}
