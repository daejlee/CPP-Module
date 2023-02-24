#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		w;
	std::string	name;
public:
	HumanB(void);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon init_w);
};

#endif