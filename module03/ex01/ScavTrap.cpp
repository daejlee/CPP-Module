#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "ScavTrap constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
};

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}
