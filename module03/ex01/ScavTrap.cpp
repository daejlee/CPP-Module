#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "ScavTrap inputName Constructor called." << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
};

ScavTrap::	ScavTrap(const ScavTrap &a) : ClapTrap(a)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = a;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << "ScavTrap " << name << " cannot attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	std::cout << name << ": " << "hitPoints: " << hitPoints << "	energyPoints: " << energyPoints << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
