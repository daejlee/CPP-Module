
#include "HumanB.hpp"

HumanB::HumanB(std::string input_name)
{
	name = input_name;
	w = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their ";
	if (w)
		std::cout << w->getType() << std::endl;
	else
		std::cout << "unarmed hand" << std::endl;
}

void	HumanB::setWeapon(Weapon &init_w)
{
	w = &init_w;
}
