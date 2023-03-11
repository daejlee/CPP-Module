#include "Fixed.hpp"

int	main(void)
{
	std::cout << "-----------------basic test-----------------" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "----------------basic test end----------------" << std::endl;
	Fixed c(10);
	Fixed d(12.2f);
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "----------------comparison test---------------" << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c > d) << std::endl;
	std::cout << (c <= d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;
	std::cout << "----------------arithmetic test---------------" << std::endl;
	std::cout << (c + d) << std::endl;
	std::cout << (c - d) << std::endl;
	std::cout << (c * d) << std::endl;
	std::cout << (c / d) << std::endl;
	std::cout << "----------------incre/decre test---------------" << std::endl;
	std::cout << "---------------------prefix--------------------" << std::endl;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << "---------------------postfix-------------------" << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	std::cout << "-------------------min/max test-----------------" << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	std::cout << Fixed::min((const Fixed &)c, (const Fixed &)d) << std::endl;
	std::cout << Fixed::max((const Fixed &)c, (const Fixed &)d) << std::endl;
	return (0);
}
