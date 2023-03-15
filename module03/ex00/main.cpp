#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bob("Bob");
	ClapTrap	Jim("Jim");
	ClapTrap	ArtyJim = Jim;

	Bob.attack("Mutated Frog");
	Bob.beRepaired(2);
	for (int i = 0; i < 12; i++)
		Bob.attack("Mutated Frog");
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");

	return (0);
}
