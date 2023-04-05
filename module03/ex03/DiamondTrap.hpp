#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		name;
public:
				DiamondTrap(void);
				DiamondTrap(std::string inputName);
				DiamondTrap(const DiamondTrap &a);
	DiamondTrap	&operator=(const DiamondTrap &a);
				~DiamondTrap(void);
	void		attack(const std::string& target);
	void		whoAmI(void);
};

#endif