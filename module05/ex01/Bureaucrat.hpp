#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
						Bureaucrat(void);
						Bureaucrat(std::string inputName, int inputGrade);
						Bureaucrat(const Bureaucrat& a);
	Bureaucrat&			operator=(const Bureaucrat& a);
						~Bureaucrat(void);
	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	std::out_of_range	GradeTooHighException(void) const;
	std::out_of_range	GradeTooLowException(void) const;
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a);

#endif