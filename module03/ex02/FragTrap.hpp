#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap(std::string inputName);
	~FragTrap(void);
	void	highFivesGuys(void);
};

#endif