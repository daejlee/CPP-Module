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

PresidentialPardonForm::~PresidentialPardonForm(void){ //기반클래스 소멸자 호출 안해줘도 대나
	std::cout << "PresidentialPardonForm destructor called, name is " << getName() << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor){
	if (executor.getGrade() <= getGradeExecute()){
		std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else{
		throw GradeTooLowException();
	}
}