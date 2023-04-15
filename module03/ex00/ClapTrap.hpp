#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
public:
					ClapTrap(void);
					ClapTrap(std::string inputName);
					~ClapTrap(void);
					ClapTrap(const ClapTrap &a);
	ClapTrap		&operator= (const ClapTrap &a);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif