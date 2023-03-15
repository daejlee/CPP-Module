#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string inputName)
{
	std::cout << "Constructor called." << std::endl;
	Name = inputName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = a;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Name = a.Name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (!HitPoints || !EnergyPoints)
	{
		std::cout << Name << " cannot attack!" << std::endl;
		return ;
	}
	EnergyPoints--;
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	std::cout << Name << ": " << "HitPoints: " << HitPoints << "	EnergyPoints: " << EnergyPoints << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << Name << " is taking damage!" << std::endl;
	if (HitPoints < amount)
		HitPoints = 0;
	else
		HitPoints -= amount;
	EnergyPoints--;
	std::cout << Name << ": " << "HitPoints: " << HitPoints << "	EnergyPoints: " << EnergyPoints << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (!EnergyPoints)
	{
		std::cout << Name << " cannot repair itself!" << std::endl;
		return ;
	}
	std::cout << Name << " is reparing itself!" << std::endl;
	HitPoints += amount;
	EnergyPoints--;
	std::cout << Name << ": " << "HitPoints: " << HitPoints << "	EnergyPoints: " << EnergyPoints << std::endl;
}
