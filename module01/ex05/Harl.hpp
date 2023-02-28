#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

enum	level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Harl::*f[4])(void);
	public:
		void	complain(std::string level);
				Harl(void);
};

#endif