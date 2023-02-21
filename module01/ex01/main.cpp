
#include "Zombie.hpp"

int	main(void)
{
	randomChump("Zombie1");
	Zombie	*z1 = newZombie("Zombie2");
	Zombie	*z_arr = zombieHorde(100, "radomZombie");
	delete(z1);
	delete[](z_arr);
	return (0);
}
