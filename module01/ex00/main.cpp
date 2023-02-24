
#include "Zombie.hpp"

int	main(void)
{
	randomChump("Zombie1");
	Zombie	*z1 = newZombie("Zombie2");
	delete(z1);
	return (0);
}
