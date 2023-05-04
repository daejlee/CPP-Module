#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const int			_gradeSign;
	const int			_gradeExecute;
public:
						Form(void);
						Form(std::string name, const int gradeSign, const int gradeExecute);
						Form(const Form& a);
	Form&				operator=(const Form& a);
						~Form(void);
	const std::string	getName(void) const;
	bool				getSign(void) const;
	int					getGradeSign(void) const;
	int					getGradeExecute(void) const;
	std::out_of_range	GradeTooHighException(void) const;
	std::out_of_range	GradeTooLowException(void) const;
	void				beSigned(Bureaucrat const& target);
};

std::ostream& operator<< (std::ostream &out, const Form& a);

#endif