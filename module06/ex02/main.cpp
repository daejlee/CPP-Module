#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base	*generate(void){
	std::srand(static_cast<unsigned int>(std::time(0)));
	switch (std::rand() % 3){
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return (NULL);
}

void	identify(Base* P){
	A*	tempA = dynamic_cast<A*>(P);
	B*	tempB = dynamic_cast<B*>(P);
	C*	tempC = dynamic_cast<C*>(P);
	if (tempA)
		std::cout << "A" << std::endl;
	else if (tempB)
		std::cout << "B" << std::endl;
	else if (tempC)
		std::cout << "C" << std::endl;
}

void	identify(Base& P){
	try{
		A&	tempA = dynamic_cast<A&>(P);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& e){
	}
	try{
		B&	tempB = dynamic_cast<B&>(P);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast& e){
	}
	try{
		C&	tempC = dynamic_cast<C&>(P);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast& e){
	}
}

int main(void){
	Base *B = generate();
	identify(B);
	identify(*B);
	return (0);
}
