#include "Zombie.hpp"

Zombie	*newZombie(string name)
{
	Zombie	*ret;
	ret = new Zombie;
	ret->init(name);
	return (ret);
}
