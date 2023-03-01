#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int					val;
	static const int	frac = 8;
public:
			Fixed(void);
			~Fixed();
			Fixed(const Fixed &a);
	Fixed	&operator = (const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif