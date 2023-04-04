#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), ClapTrap()
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string inputName) : ScavTrap(), FragTrap(), ClapTrap()
DiamondTrap::DiamondTrap(const DiamondTrap &a);
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &a);
DiamondTrap::~DiamondTrap(void);
void DiamondTrap::whoAmI(void);