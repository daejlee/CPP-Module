#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "FragTrap inputName constructor called." << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = a;
}

FragTrap&	FragTrap::operator=(const FragTrap &a)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	Name = a.Name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Let's do a high Five~." << std::endl;
}
