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

RobotomyRequestForm::~RobotomyRequestForm(void){ //기반클래스 소멸자 호출 안해줘도 대나
	std::cout << "RobotomyRequestForm destructor called, name is " << getName() << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor){
	if (executor.getGrade() <= getGradeExecute()){
		std::cout << "* DRILLING NOISES *" << std::endl;
		std::cout << getName() << " has been robotomized successfully 50\% of the time." << std::endl;
	}
	else{
		throw GradeTooLowException();
	}
}
