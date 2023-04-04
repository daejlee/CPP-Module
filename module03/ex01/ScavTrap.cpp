#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "ScavTrap inputName Constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
};

ScavTrap::	ScavTrap(const ScavTrap &a) : ClapTrap(a)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = a;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	Name = a.Name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}
