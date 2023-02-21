
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*ret;
	ret = new Zombie;
	ret->set_name(name);
	ret->announce();
	return (ret);
}
