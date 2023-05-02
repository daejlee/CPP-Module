#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	class GradeTooHighException{
		public:
			void	report(void){std::cout << "Grade too high!" << std::endl;}
	};
	class GradeTooLowException{
		public:
			void	report(void){std::cout << "Grade too low!" << std::endl;}
	};
public:
						Bureaucrat(void);
						Bureaucrat(std::string inputName, int inputGrade);
						Bureaucrat(const Bureaucrat& a);
	Bureaucrat&			operator=(const Bureaucrat& a);
						~Bureaucrat(void);
	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(int val);
	void				decrementGrade(int val);
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& a);

#endif