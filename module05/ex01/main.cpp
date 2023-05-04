#include "Bureaucrat.hpp"

int main()
{
	std::cout << "constructor test" << std::endl;
	try{
		Bureaucrat	Bob("Bob", 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		Bureaucrat	Bob("Bob", 0);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "increment / decrement test" << std::endl;
	try{
		Bureaucrat	John("John", 1);
		John.incrementGrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		Bureaucrat	John("John", 150);
		John.decrementGrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}