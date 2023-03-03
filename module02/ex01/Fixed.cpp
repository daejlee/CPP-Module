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
	float	f_temp = 0;
	int		fract;
	int		decimal;
	int		temp;

	decimal = val >> 8;
	fract = val % 256;
	float		i;
	while (fract)
	{
		temp = fract;
		i = 1;
		while (temp /= 2)
			i *= 0.5;
		f_temp += static_cast<float>(i);
		fract /= 2;
	}
	return (static_cast<float>(decimal + f_temp));
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