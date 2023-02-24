#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*w;
	std::string	name;
public:
	HumanB(std::string input_name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &init_w);
};

#endif