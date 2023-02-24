
#include "HumanB.hpp"

HumanB::HumanB(std::string input_name)
{
	name = input_name;
	w = new Weapon;
	w->setType("unarmed");
}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << w->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &init_w)
{
	delete w;
	w = &init_w;
}
