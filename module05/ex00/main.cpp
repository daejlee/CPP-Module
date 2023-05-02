#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat	GoodBob("GoodBob", 150);
		Bureaucrat	BadBob("BadBob", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}