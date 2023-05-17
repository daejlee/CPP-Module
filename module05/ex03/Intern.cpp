#include "Intern.hpp"

Intern::Intern(void){
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& a){
	if (this != &a){
		;}
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& a){
	if (this != &a){
		;}
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void){
	std::cout << "Intern destructor called" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target){
	const std::string	arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++){
		if (!name.compare(arr[i])){
			switch(i){
				case 0:
					std::cout << "Intern creates " << arr[0] << std::endl;
					return new ShrubberyCreationForm(target);
				case 1:
					std::cout << "Intern creates " << arr[1] << std::endl;
					return new RobotomyRequestForm(target);
				case 2:
					std::cout << "Intern creates " << arr[2] << std::endl;
					return new PresidentialPardonForm(target);
			}
		}
	}
	throw std::invalid_argument("There is no matching form");
}
