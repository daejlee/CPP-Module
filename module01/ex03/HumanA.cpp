
#include "HumanA.hpp"

HumanA::HumanA(std::string input_name, Weapon &init_w)
{
	w = &init_w;
	name = input_name;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << w->getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed." << std::endl;
}
