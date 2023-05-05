#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "AForm.hpp"
# include <exception>
# include <string>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
							Bureaucrat(void);
							Bureaucrat(std::string name, int grade);
							Bureaucrat(const Bureaucrat& a);
		Bureaucrat&			operator=(const Bureaucrat& a);
							~Bureaucrat(void);
		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		std::out_of_range	GradeTooHighException(void) const;
		std::out_of_range	GradeTooLowException(void) const;
		void				signForm(AForm& target) const;
		void				executeForm(AForm& target) const;
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a);

#endif