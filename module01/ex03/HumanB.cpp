
#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "HumanB created." << std::endl;
	w.setType("unarmed");
}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon init_w)
{
	w = init_w;
}
