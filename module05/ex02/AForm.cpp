#include "AForm.hpp"

AForm::AForm(void) : _name("Anonymous"), _sign(false), _gradeSign(1), _gradeExecute(1){
	std::cout << "Default AForm constructor called, name is " << _name << std::endl;
}

AForm::AForm(std::string name, const int gradeSign, const int gradeExecute) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExecute > 150)
		throw GradeTooLowException();
	std::cout << "Input AForm constructor called, name is " << _name << std::endl;
}

AForm::AForm(const AForm& a) : _name(a.getName()), _sign(a.getSign()), _gradeSign(a.getGradeSign()), _gradeExecute(a.getGradeExecute()){
	std::cout << "AForm copy constructor called name is " << _name << std::endl;
}

AForm&	AForm::operator=(const AForm& a){
	if (this != &a)
		_sign = a.getSign();
	std::cout << "AForm copy assignment operator called" << std::endl;
	return (*this);
}

AForm::~AForm(void){
	std::cout << "AForm destructor called, name is " << _name << std::endl;
}

const std::string	AForm::getName(void) const{
	return (_name);
}

bool	AForm::getSign(void) const{
	return (_sign);
}

int	AForm::getGradeSign(void) const{
	return (_gradeSign);
}

int	AForm::getGradeExecute(void) const{
	return (_gradeExecute);
}

void	AForm::beSigned(const Bureaucrat &signer){
	if (signer.getGrade() <= _gradeSign){
		_sign = true;
	}
	else{
		throw GradeTooLowException();
	}
}

std::out_of_range	AForm::GradeTooHighException(void) const{
	std::string	buf = "Grade too high!";
	return (std::out_of_range(buf));
}

std::out_of_range	AForm::GradeTooLowException(void) const{
	std::string	buf = "Grade too low!";
	return (std::out_of_range(buf));
}

std::ostream& operator<< (std::ostream &out, const AForm& a)
{
	out << a.getName() << ", Sign: " << a.getSign() << ", gradeSign: " << a.getGradeSign() << ", gradeExecute: " << a.getGradeExecute() << std::endl;
	return (out);
}