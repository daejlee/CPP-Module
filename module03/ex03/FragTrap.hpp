#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
				FragTrap(void);
				FragTrap(std::string inputName);
				FragTrap(const FragTrap &a);
	FragTrap	&operator=(const FragTrap &a);
				~FragTrap(void);
	void		attack(const std::string& target);
	void		highFivesGuys(void);
};

#endif