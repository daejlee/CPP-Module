#include "Fixed.hpp"

Fixed::Fixed(void)
{
	val = 0;
}

Fixed::Fixed(const int i)
{
	val = i << 8;
}

Fixed::Fixed(const float f)
{
	val = roundf(f * 256);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &a)
{
	val = a.getRawBits();
}

Fixed& Fixed::operator= (const Fixed &a)
{
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
	return (roundf(static_cast<float>(val) / 256));
}

std::ostream& operator<< (std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return (out);
}

bool	Fixed::operator< (const Fixed &a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator> (const Fixed &a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator<= (const Fixed &a) const
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator>= (const Fixed &a) const
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator== (const Fixed &a) const
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!= (const Fixed &a) const
{
	return (this->getRawBits() != a.getRawBits());
}

Fixed	Fixed::operator+ (const Fixed &a) const
{
	Fixed	temp(toFloat() + a.toFloat());
	return (temp);
}

Fixed	Fixed::operator- (const Fixed &a) const
{
	Fixed	temp(toFloat() - a.toFloat());
	return (temp);
}

Fixed	Fixed::operator* (const Fixed &a) const
{
	Fixed	temp(toFloat() * a.toFloat());
	return (temp);
}

Fixed	Fixed::operator/ (const Fixed &a) const
{
	Fixed	temp(toFloat() / a.toFloat());
	return (temp);
}

Fixed &Fixed::operator++ (void)
{
	this->val += 1;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed	temp(this->toFloat());
	this->val += 1;
	return (temp);
}

Fixed &Fixed::operator-- (void)
{
	this->val -= 1;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed	temp(this->toFloat());
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
