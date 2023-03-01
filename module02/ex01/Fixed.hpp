#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					val;
	static const int	frac = 8; // [0, 0, 0, 0, 0, 0, 0, 0]
public:
			Fixed(const int i);
			Fixed(const float f);
			~Fixed();
			Fixed(const Fixed &a);
	Fixed	&operator = (const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

Fixed::Fixed(const int i)
{
	std::cout << "Default constructor called" << std::endl;
	val = i << 8;
}

Fixed::Fixed(const float f)
{
	std::cout << "Default constructor called" << std::endl;
	val = static_cast<int>(f) << 8;
	float	rem = f - static_cast<int>(f);
	while (rem < 1)
		rem *= 10;
}

#endif