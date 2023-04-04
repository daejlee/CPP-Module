#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
				ScavTrap(void);
				ScavTrap(std::string inputName);
				ScavTrap(const ScavTrap &a);
	ScavTrap&	operator=(const ScavTrap &a);
				~ScavTrap(void);
	void		attack(const std::string& target);
	void		guardGate(void);
};

#endif