#include "whatever.hpp"

int	main(void){
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max( a, b ) = " << ::max(2, 3) << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;

	std::string	c = "chaince1";
	std::string	d = "chaince2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	std::cout << "min( c, d ) = " << ::min("chaince1", "chaince2") << std::endl;

	return 0;
}
