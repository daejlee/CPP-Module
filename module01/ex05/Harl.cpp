
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)

{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int		Harl::check_level(std::string level)
{
	if (!level.compare("DEBUG"))
		return (DEBUG);
	else if (!level.compare("INFO"))
		return (INFO);
	else if (!level.compare("WARNING"))
		return (WARNING);
	else if (!level.compare("ERROR"))
		return (ERROR);
	return (-1);
}

Harl::Harl(void)
{
	f[DEBUG] = &Harl::debug;
	f[INFO] = &Harl::info;
	f[WARNING] = &Harl::warning;
	f[ERROR] = &Harl::error;
}

void	Harl::complain(std::string level)
{
	switch (check_level(level))
	{
	case	DEBUG:
		(this->*f[DEBUG])();
		break;
	case	INFO:
		(this->*f[INFO])();
		break;
	case	WARNING:
		(this->*f[WARNING])();
		break;
	case	ERROR:
		(this->*f[ERROR])();
		break;
	default:
		std::cout << "invalid level." << std::endl;
		break;
	}
}
