#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Anonymous", 72, 45){
	std::cout << "Default RobotomyRequestForm constructor called, name is: " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
	std::cout << "Input RobotomyRequestForm constructor called, name is: " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& a) : AForm(a){
	std::cout << "RobotomyRequestForm copy constructor called name is " << getName() << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& a){
	a.getSign();
	std::cout << "RobotomyRequestForm copy assignment operator called, but nothing changed." << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm destructor called, name is " << getName() << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor){
	if (getSign() && executor.getGrade() <= getGradeExecute()){
		std::cout << "* DRILLING NOISES *" << std::endl;
		if (rand() % 2)
			std::cout << getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << getName() << "'s robotomization has failed." << std::endl;
	}
	else if (!getSign()){
		throw NotSignedException();
	}
	else
		throw GradeTooLowException();
}
