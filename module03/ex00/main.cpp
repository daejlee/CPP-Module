#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Bob("Bob");
	ClapTrap	Jim("Jim");
	ClapTrap	ArtyJim = Jim;

	Bob.attack("Mutated Frog");
	Bob.beRepaired(2);
	for (i = 0; i++; i < 10)
		Bob.attack("Mutated Frog");
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");

	return (0);
}
