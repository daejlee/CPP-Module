#include "Zombie.hpp"

void	randomChump(string name)
{
	Zombie	temp;
	
	temp.init(name);
	temp.announce();
}
