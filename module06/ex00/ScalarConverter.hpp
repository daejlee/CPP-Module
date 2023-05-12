#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>

enum e_type{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NEG_INFF,
	POS_INFF,
	NANF,
	NEG_INF,
	POS_INF,
	NANN
};

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
