#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
	public:
								PresidentialPardonForm(void);
								PresidentialPardonForm(std::string target);
								PresidentialPardonForm(const PresidentialPardonForm& a);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& a);
								~PresidentialPardonForm(void);
		void					execute(Bureaucrat const& executor);
};

#endif