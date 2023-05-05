#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Anonymous"), _grade(1){
	std::cout << "Default Bureaucrat constructor called, name is: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Input Bureaucrat constructor called, name is " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& a) : _name(a.getName()), _grade(a.getGrade()){
	std::cout << "Bureaucrat copy constructor called name is " << _name << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& a){
	if (this != &a)
		_grade = a.getGrade();
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called, name is " << _name << std::endl;
}

const std::string	Bureaucrat::getName(void) const{
	return (_name);
}

int	Bureaucrat::getGrade(void) const{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void){
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	else if (_grade - 1 > 150)
		throw GradeTooLowException();
	_grade--;
	std::cout << _name << "'s grade is now " << _grade << std::endl;
}

void	Bureaucrat::decrementGrade(void){
	if (_grade + 1 < 1)
		throw GradeTooHighException();
	else if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << _name << "'s grade is now " << _grade << std::endl;
}

std::out_of_range	Bureaucrat::GradeTooHighException(void) const{
	std::string	buf = "Grade too high!";
	return (std::out_of_range(buf));
}
std::out_of_range	Bureaucrat::GradeTooLowException(void) const{
	std::string	buf = "Grade too low!";
	return (std::out_of_range(buf));
}

void	Bureaucrat::signForm(AForm& target) const{
	try{
		target.beSigned(*this);
		std::cout << _name << " signed " << target.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << _name << " couldn't sign " << target.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm& target) const{
	try{
		target.execute(*this);
		std::cout << _name << " executed " << target.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << _name << " couldn't execute " << target.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a)
{
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return (out);
}
