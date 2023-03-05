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
	Fixed	&operator = (const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif
