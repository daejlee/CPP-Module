#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					val;
	static const int	frac = 8;
public:
			Fixed(void);
			Fixed(const int i);
			Fixed(const float f);
			~Fixed(void);
			Fixed(const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator= (const Fixed &a);
	bool	operator< (const Fixed &a);
	bool	operator> (const Fixed &a);
	bool	operator<= (const Fixed &a);
	bool	operator>= (const Fixed &a);
	bool	operator== (const Fixed &a);
	bool	operator!= (const Fixed &a);
	float	operator+ (const Fixed &a, const Fixed &b);
	float	operator- (const Fixed &a, const Fixed &b);
	// int		operator* (const Fixed &a);
	// int		operator/ (const Fixed &a);
	// Fixed	&operator++ (void);
	// Fixed	&operator-- (void);
	// Fixed	&operator++ (int);
	// Fixed	&operator-- (int);
};

std::ostream& operator<< (std::ostream& out, const Fixed& Fixed);

#endif
