#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Anonymous", 25, 5){
	std::cout << "Default PresidentialPardonForm constructor called, name is: " << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
	std::cout << "Input PresidentialPardonForm constructor called, name is: " << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& a) : AForm(a){
	std::cout << "PresidentialPardonForm copy constructor called name is " << getName() << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& a){
	a.getSign();
	std::cout << "PresidentialPardonForm copy assignment operator called, but nothing changed." << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm destructor called, name is " << getName() << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor){
	if (getSign() && executor.getGrade() <= getGradeExecute()){
		std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else{
		throw GradeTooLowException();
	}
}
