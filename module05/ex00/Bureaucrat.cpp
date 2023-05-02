#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Anonymous"), grade(1){
	std::cout << "Default Bureaucrat constructor called, name is: " << name << std::endl;
}

Bureaucrat::Bureaucrat(std::string inputName, int inputGrade) : name(inputName), grade(inputGrade){
	std::cout << "inputName Bureaucrat constructor called, name is " << name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& a) : name(a.name), grade(a.grade){
	std::cout << "Bureaucrat copy constructor called name is " << name << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& a){
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &a)
		grade = a.getGrade();
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called, name is " << name << std::endl;
}

const std::string	Bureaucrat::getName(void) const{
	return (name);
}

int	Bureaucrat::getGrade(void) const{
	return (grade);
}

void	Bureaucrat::incrementGrade(int val){
}