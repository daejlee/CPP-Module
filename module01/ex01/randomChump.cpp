
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	temp;
	temp.set_name(name);
	temp.announce();
}
