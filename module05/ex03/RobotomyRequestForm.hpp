#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
	public:
								RobotomyRequestForm(void);
								RobotomyRequestForm(std::string target);
								RobotomyRequestForm(const RobotomyRequestForm& a);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& a);
								~RobotomyRequestForm(void);
		void					execute(Bureaucrat const& executor);
};

#endif