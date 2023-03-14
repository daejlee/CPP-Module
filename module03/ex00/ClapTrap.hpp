#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	HitPoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
public:
				ClapTrap(std::string i_name);
				~ClapTrap(void);
				ClapTrap(const ClapTrap &a);
	ClapTrap	&operator= (const ClapTrap &a);
	void		attack(const std::string& target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif