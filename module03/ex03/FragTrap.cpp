#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called." << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string inputName) : ClapTrap(inputName)
{
	std::cout << "FragTrap inputName constructor called." << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = a;
}

FragTrap&	FragTrap::operator=(const FragTrap &a)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
	{
		std::cout << name << " cannot attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	std::cout << name << ": " << "hitPoints: " << hitPoints << "	energyPoints: " << energyPoints << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Let's do a high Five~." << std::endl;
}
