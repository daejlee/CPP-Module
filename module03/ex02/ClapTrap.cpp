#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor called." << std::endl;
	name = "Anonymous";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string inputName)
{
	std::cout << "ClapTrap inputName Constructor called." << std::endl;
	name = inputName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = a;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << name << " cannot attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	std::cout << name << ": " << "hitPoints: " << hitPoints << "	energyPoints: " << energyPoints << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " is taking damage!" << std::endl;
	if (hitPoints < amount)
		hitPoints = 0;
	else
		hitPoints -= amount;
	energyPoints--;
	std::cout << name << ": " << "hitPoints: " << hitPoints << "	energyPoints: " << energyPoints << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (!energyPoints)
	{
		std::cout << name << " cannot repair itself!" << std::endl;
		return ;
	}
	std::cout << name << " is reparing itself!" << std::endl;
	hitPoints += amount;
	energyPoints--;
	std::cout << name << ": " << "hitPoints: " << hitPoints << "	energyPoints: " << energyPoints << std::endl;
}
