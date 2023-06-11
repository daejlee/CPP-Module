#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <cmath>

class ScalarConverter{
	private:
							ScalarConverter(void);
							ScalarConverter(const ScalarConverter& a);
		ScalarConverter&	operator=(const ScalarConverter& a);
		static void			putNum(double d, char *endptr);
	public:
							~ScalarConverter(void);
		static void			Convert(std::string input);
};

#endif
