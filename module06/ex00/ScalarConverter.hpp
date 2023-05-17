#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>

class ScalarConverter{
	private:
	public:
							ScalarConverter(void);
							ScalarConverter(const ScalarConverter& a);
		ScalarConverter&	operator=(const ScalarConverter& a);
							~ScalarConverter(void);
		void				Convert(std::string input);
		void				putChar(std::string input);
		void				putNum(double d);
};

#endif
