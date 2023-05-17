#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------Shruberry test------------" << std::endl;
	{
		std::cout << "sign test" << std::endl;
		{
			ShrubberyCreationForm	Form("House");
			Bureaucrat	John("John", 145);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			ShrubberyCreationForm	Form("House");
			Bureaucrat	John("John", 137);
			John.executeForm(Form);
			John.signForm(Form);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------Shruberry test end------------\n\n" << std::endl;
	std::cout << "------------Robotomy test------------" << std::endl;
	{
		std::cout << "sign test" << std::endl;
		{
			RobotomyRequestForm	Form("Robocop");
			Bureaucrat	John("John", 72);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			RobotomyRequestForm	Form("Robocop");
			Bureaucrat	John("John", 45);
			John.executeForm(Form);
			John.signForm(Form);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------Robotomy test end------------\n\n" << std::endl;
	std::cout << "------------PresidentialPardon test------------" << std::endl;
	{
		std::cout << "sign test" << std::endl;
		{
			PresidentialPardonForm	Form("Jim");
			Bureaucrat	John("John", 25);
			John.signForm(Form);
			John.decrementGrade();
			John.signForm(Form);
		}
		std::cout << "execute test" << std::endl;
		{
			PresidentialPardonForm	Form("Jim");
			Bureaucrat	John("John", 5);
			John.executeForm(Form);
			John.signForm(Form);
			John.executeForm(Form);
			John.decrementGrade();
			John.executeForm(Form);
		}
	}
	std::cout << "------------PresidentialPardon test end------------" << std::endl;
	return (0);
}