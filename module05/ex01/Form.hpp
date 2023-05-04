#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
private:
	const std::string	name;
	bool				sign;
	const int			grade;
public:
						Form(void);
						Form(std::string inputName);
						~Form(void);
	
};

std::ostream& operator<< (std::ostream &out, const Form& a);

#endif