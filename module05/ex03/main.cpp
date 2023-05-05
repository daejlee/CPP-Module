#include "Intern.hpp"

int main()
{
	Intern	Ben;
	AForm*	scf;
	AForm*	rrf;
	AForm*	ppf;

	scf = Ben.makeForm("shrubbery creation", "House");
	rrf = Ben.makeForm("robotomy request", "Robocop");
	ppf = Ben.makeForm("presidential pardon", "Jim");
	delete scf;
	delete rrf;
	delete ppf;
	try{
		AForm*	wrongForm = Ben.makeForm("wrong", "wrong");
		wrongForm->getName();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}