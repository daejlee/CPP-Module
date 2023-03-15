#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Bob("Bob");
	ScavTrap	Jim("Jim");
	ScavTrap	ArtyJim = Jim;

	Bob.attack("Mutated Frog");
	Bob.beRepaired(2);
	Bob.attack("Mutated Frog");
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");
	Jim.guardGate();
	return (0);
}
