#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string i_name)
{
	std::cout << "Default constructor called." << std::endl;
	name = i_name;
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
	name = a.name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = a.name;
	HitPoints = a.HitPoints;
	EnergyPoints = a.EnergyPoints;
	AttackDamage = a.AttackDamage;
	return (*this);
}

void		attack(const std::string& target) const
{
	if (!HitPoints || !EnergyPoints)
	{
		std::cout << "ClapTrap cannot attack !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << "attacks " << target << ", causing " << AttackDamage << "points of damage!" << std::endl;
	takeDamage(AttackDamage);
}

void		takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap is taking damage !" << std::endl;
	if (HitPoints < amount)
		HitPoints = 0;
	else
		HitPoints -= amount;
	EnergyPoints--;
}

void		beRepaired(unsigned int amount)
{
	if (!EnergyPoints)
	{
		std::cout << "ClapTrap cannot repair itself !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap is reparing itself !" << std::endl;
	HitPoints += amount;
	EnergyPoints--;
}
