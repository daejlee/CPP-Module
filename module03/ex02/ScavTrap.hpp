#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap(std::string inputName);
	~ScavTrap(void);
	void	guardGate(void);
};

#endif