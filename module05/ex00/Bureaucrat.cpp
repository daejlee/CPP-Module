#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Anonymous"), grade(1){
	std::cout << "Default Bureaucrat constructor called, name is: " << name << std::endl;
}

Bureaucrat::Bureaucrat(std::string inputName, int inputGrade) : name(inputName), grade(inputGrade){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "input Bureaucrat constructor called, name is " << name << std::endl;
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
	if (grade + val < 1)
		throw GradeTooHighException();
	else if (grade + val > 150)
		throw GradeTooLowException();
	std::cout << getName() << "'s grade is now " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade(int val){
	if (grade - val < 1)
		throw GradeTooHighException();
	else if (grade - val > 150)
		throw GradeTooLowException();
	std::cout << getName() << "'s grade is now " << getGrade() << std::endl;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a)
{
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
}