#include "Form.hpp"

Form::Form(void) : _name("Anonymous"), _sign(false), _gradeSign(1), _gradeExecute(1){
	std::cout << "Default Form constructor called, name is: " << _name << std::endl;
}

Form::Form(std::string name, const int gradeSign, const int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExecute > 150)
		throw GradeTooLowException();
	std::cout << "Input Form constructor called, name is: " << _name << std::endl;
}

Form::Form(const Form& a) : _name(a.getName()), _sign(a.getSign()), _gradeSign(a.getGradeSign()), _gradeExecute(a.getGradeExecute()){
	std::cout << "Form copy constructor called name is " << _name << std::endl;
}

Form&	Form::operator=(const Form& a){
	if (this != &a)
		_sign = a.getSign();
	std::cout << "Form copy assignment operator called" << std::endl;
	return (*this);
}

Form::~Form(void){
	std::cout << "Form destructor called, name is: " << _name << std::endl;
}

const std::string	Form::getName(void) const{
	return (_name);
}

bool	Form::getSign(void) const{
	return (_sign);
}

int	Form::getGradeSign(void) const{
	return (_gradeSign);
}

int	Form::getGradeExecute(void) const{
	return (_gradeExecute);
}

std::out_of_range	Form::GradeTooHighException(void) const{
	std::string	buf = "Grade too high!";
	return (std::out_of_range(buf));
}

std::out_of_range	Form::GradeTooLowException(void) const{
	std::string	buf = "Grade too low!";
	return (std::out_of_range(buf));
}

void	Form::beSigned(const Bureaucrat &target){
	if (target.getGrade() <= _gradeSign){
		_sign = true;
	}
	else{
		throw GradeTooLowException();
	}
}

std::ostream& operator<< (std::ostream &out, const Form& a)
{
	out << a.getName() << ", Sign: " << a.getSign() << ", gradeSign: " << a.getGradeSign() << ", gradeExecute: " << a.getGradeExecute() << std::endl;
	return (out);
}