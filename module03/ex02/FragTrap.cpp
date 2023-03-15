#include "FragTrap.hpp"

FragTrap::FragTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "FragTrap constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
};

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Let's do a high Five~." << std::endl;
}
