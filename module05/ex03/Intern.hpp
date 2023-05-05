#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
public:
	Intern(void);
	Intern(const Intern& a);
	Intern&	operator=(const Intern& a);
	~Intern(void);
	AForm*	makeForm(std::string name, std::string target);
};

#endif