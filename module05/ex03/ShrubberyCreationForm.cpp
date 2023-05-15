#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Anonymous", 145, 137){
	std::cout << "Default ShrubberyCreationForm constructor called, name is: " << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137){
	std::cout << "Input ShrubberyCreationForm constructor called, name is: " << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a) : AForm(a){
	std::cout << "ShrubberyCreationForm copy constructor called name is " << getName() << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& a){
	a.getSign();
	std::cout << "ShrubberyCreationForm copy assignment operator called, but nothing changed." << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called, name is " << getName() << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor){
	if (getSign() && executor.getGrade() <= getGradeExecute()){
		std::string buf = getName();
		buf.append("_shruberry");
		std::ofstream	fout(buf.c_str());
		if (!fout){
			std::cerr << "Error: could not open file" << std::endl;
			return ;
		}
		fout	<< "           ________\n"
         		<< "        _/        \\_\n"
         		<< "     __/           \\__\n"
         		<< "   _/                  \\_\n"
         		<< "  /                      \\\n"
         		<< " /                        \\\n"
         		<< " \\                        /\n"
         		<< "  \\__                  __/\n"
         		<< "     \\_              _/\n"
         		<< "       \\____________/\n"
         		<< "           ||   ||\n"
         		<< "           ||   ||\n"
         		<< "           ||   ||\n"
         		<< "           ||   ||\n"
         		<< "           ||   ||\n";
		fout.close();
	}
	else{
		throw GradeTooLowException();
	}
}
