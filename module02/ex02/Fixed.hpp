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
	float	operator+ (const Fixed &a);
	float	operator- (const Fixed &a);
	float	operator* (const Fixed &a);
	float	operator/ (const Fixed &a);
	float	operator++ (void);
	float	operator++ (int);
	float	operator-- (void);
	float	operator-- (int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<< (std::ostream& out, const Fixed& Fixed);

#endif
