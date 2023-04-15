#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
	name = "Anonymous";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string inputName) : ClapTrap(inputName + "_clap_name"), ScavTrap(inputName), FragTrap(inputName)
{
	DiamondTrap::name = inputName;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap inputName Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(a), ScavTrap(a), FragTrap(a)
{
	std::cout << "DiamondTrap Copy Constructor called." << std ::endl;
	*this = a;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &a)
{
	std::cout << "DiamondTrap Copy Assignment operator called." << std ::endl;
	name = a.name;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std ::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}
