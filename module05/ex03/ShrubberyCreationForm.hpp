#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm
{
	private:
	public:
								ShrubberyCreationForm(void);
								ShrubberyCreationForm(std::string target);
								ShrubberyCreationForm(const ShrubberyCreationForm& a);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& a);
								~ShrubberyCreationForm(void);
		void					execute(Bureaucrat const& executor);
};

#endif