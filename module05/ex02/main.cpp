#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------Shruberry test------------" << std::endl;
	{
		ShrubberyCreationForm	Form("House");
		std::cout << "sign test" << std::endl;
		{
			Bureaucrat	John("John", 145);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			Bureaucrat	John("John", 137);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------Shruberry test end------------" << std::endl;
	std::cout << "------------Robotomy test------------" << std::endl;
	{
		RobotomyRequestForm	Form("Robocop");
		std::cout << "sign test" << std::endl;
		{
			Bureaucrat	John("John", 72);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			Bureaucrat	John("John", 45);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------Robotomy test end------------" << std::endl;
	std::cout << "------------PresidentialPardon test------------" << std::endl;
	{
		PresidentialPardonForm	Form("Jim");
		std::cout << "sign test" << std::endl;
		{
			Bureaucrat	John("John", 25);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			Bureaucrat	John("John", 5);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------PresidentialPardon test end------------" << std::endl;
	return (0);
}