
#include "HumanA.hpp"

HumanA::HumanA(Weapon init_w)
{
	w = init_w;
	name = "HumanA";
	std::cout << "HumanA created." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed." << std::endl;
}
