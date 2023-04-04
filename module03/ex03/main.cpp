#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Bob("Bob");
	FragTrap	Jim("Jim");
	FragTrap	ArtyJim = Jim;

	Bob.attack("Mutated Frog");
	Bob.beRepaired(2);
	Bob.attack("Mutated Frog");
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");
	Jim.highFivesGuys();
	return (0);
}
