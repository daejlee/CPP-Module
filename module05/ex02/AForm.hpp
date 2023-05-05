#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
							AForm(void);
							AForm(std::string name, const int gradeSign, const int gradeExecute);
							AForm(const AForm& a);
		AForm&				operator=(const AForm& a);
		virtual				~AForm(void);
		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;
		void				setSign(void);
		std::out_of_range	GradeTooHighException(void) const;
		std::out_of_range	GradeTooLowException(void) const;
		void				beSigned(Bureaucrat const& signer);
		virtual void		execute(Bureaucrat const& executor) = 0;
};

std::ostream& operator<< (std::ostream &out, const AForm& a);

#endif