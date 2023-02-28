
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z_arr = zombieHorde(15, "radomZombie");
	for (int i = 0; i < 15; i++)
	{
		std::cout << i << "th zombie" << std::endl;
		(z_arr + i)->announce();
	}
	delete[](z_arr);
	return (0);
}
