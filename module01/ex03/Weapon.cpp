
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon created." << std::endl;
}

Weapon::Weapon(std::string input_type)
{
	std::cout << "Weapon created." << std::endl;
	type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed." << std::endl;
}

std::string const	&Weapon::getType(void)
{
	return ((std::string const &)type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
