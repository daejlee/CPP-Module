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
	return (*this);
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

void	Bureaucrat::incrementGrade(void){
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else if (grade - 1 > 150)
		throw GradeTooLowException();
	std::cout << getName() << "'s grade is now " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade(void){
	if (grade + 1 < 1)
		throw GradeTooHighException();
	else if (grade + 1 > 150)
		throw GradeTooLowException();
	std::cout << getName() << "'s grade is now " << getGrade() << std::endl;
}

std::out_of_range	Bureaucrat::GradeTooHighException(void) const{
	std::string	buf = "Grade too high!";
	return (std::out_of_range(buf));
}
std::out_of_range	Bureaucrat::GradeTooLowException(void) const{
	std::string	buf = "Grade too low!";
	return (std::out_of_range(buf));
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a)
{
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return (out);
}
