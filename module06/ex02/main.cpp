#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base	*generate(void){
	std::srand(static_cast<unsigned int>(std::time(0)));
	try{
		switch (std::rand() % 3){
			case 0:
				return new A;
			case 1:
				return new B;
			case 2:
				return new C;
		}
	}
	catch (std::exception &e){
		e.what();
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
	else
		std::cout << "dynamic casting failed!" << std::endl;
}

void	identify(Base& P){
	try{
		A&	tempA = dynamic_cast<A&>(P);
		std::cout << "A" << std::endl;
		(void)tempA;
		return ;
	}
	catch (std::bad_cast& e){
	}
	try{
		B&	tempB = dynamic_cast<B&>(P);
		std::cout << "B" << std::endl;
		(void)tempB;
		return ;
	}
	catch (std::bad_cast& e){
	}
	try{
		C&	tempC = dynamic_cast<C&>(P);
		std::cout << "C" << std::endl;
		(void)tempC;
		return ;
	}
	catch (std::bad_cast& e){
	}
	std::cout << "dynamic casting failed!" << std::endl;
}

int main(void){
	Base *randomBase = generate();
	identify(randomBase);
	identify(*randomBase);
	return (0);
}
