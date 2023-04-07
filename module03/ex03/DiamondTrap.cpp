#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
	name = "Anonymous_clap_name";
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string inputName) : ClapTrap(inputName), ScavTrap(), name(ClapTrap::Name+"_clap_name")
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
	std::cout << "DiamondTrap inputName Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ScavTrap(a), FragTrap(a)
{
	std::cout << "DiamondTrap Copy Constructor called." << std ::endl;
	*this = a;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &a)
{
	std::cout << "DiamondTrap Copy Assignment operator called." << std ::endl;
	Name = a.Name;
	name = a.name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
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
	std::cout << "My name is " << Name << ", and my ClapTrap name is " << name << std::endl;
}
