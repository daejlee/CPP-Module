#include "Point.hpp"

int	main(void)
{
	Point	A(0.0f, 3.5f);
	Point	B(4.5f, 0.0f);
	Point	C(0.0f, 0.0f);
	Point	T(1.1f, 1.1f);
	std::cout << "basic test" << std::endl;
	std::cout << "A: " << A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "T: " << T << std::endl;
	std::cout << "bsp res: " << bsp(A, B, C, T) << std::endl;
	std::cout << "vertex / edge test" << std::endl;
	Point	temp1(0.0f, 3.5f);
	std::cout << "modified T: " << temp1 << std::endl;
	std::cout << "bsp res: " << bsp(A, B, C, temp1) << std::endl;
	Point	temp2(2.0f, 0.0f);
	std::cout << "modified T: " << temp2 << std::endl;
	std::cout << "bsp res: " << bsp(A, B, C, temp2) << std::endl;
	return (0);
}
