#include "Serializer.hpp"

int main(void){
	Data	A;
	A.charData = 'a';
	A.doubleData = 10.5;
	A.floatData = -5.6f;
	A.intData = 20;

	Serializer	S;
	uintptr_t	B = S.serialize(&A);
	std::cout << B << std::endl;
	Data	*D_S = S.deserialize(B);
	std::cout << &A << "  :  " << D_S << std::endl;
	std::cout << D_S->charData << std::endl;
	std::cout << D_S->doubleData << std::endl;
	std::cout << D_S->floatData << std::endl;
	std::cout << D_S->intData << std::endl;
	return (0);
}
