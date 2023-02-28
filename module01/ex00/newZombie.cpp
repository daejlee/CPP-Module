
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*ret;
	ret = new Zombie(name);
	return (ret);
}
