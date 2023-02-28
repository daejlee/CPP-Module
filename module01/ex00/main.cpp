
#include "Zombie.hpp"

int	main(void)
{
	randomChump("Zombie1");
	Zombie	*z1 = newZombie("Zombie2");
	z1->announce();
	delete(z1);
	return (0);
}
