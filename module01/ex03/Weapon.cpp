
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string input_type)
{
	type = input_type;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const	&Weapon::getType(void)
{
	return ((std::string const &)type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
