#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "constructor test" << std::endl;
	try{
		Form	Bob("Bob", 150, 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		Form	Bob("Bob", 0, 150);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "insertion operator overloading test" << std::endl;
	Bureaucrat	John("John", 5);
	std::cout << John;
	std::cout << "sign test" << std::endl;
	Form		Admission("SeoulUnivAdmissionForm", 5, 10);
	John.signForm(Admission);
	John.decrementGrade();
	John.signForm(Admission);
	return (0);
}