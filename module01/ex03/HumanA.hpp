#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		w;
	std::string	name;
public:
	HumanA(Weapon init_w);
	~HumanA(void);
	void	attack(void);
};

#endif