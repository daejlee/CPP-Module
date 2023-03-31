#include "Point.hpp"

int	main(void)
{
	Point	A(1.2, 3.5);
	Point	B(6.2, 2.5);
	Point	C(-4.2, -4.5);
	Point	T(-1, -1);

	std::cout << bsp(A, B, C, T);
	return (0);
}
