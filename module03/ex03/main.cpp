#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Bob;
	DiamondTrap	John(Bob);
	DiamondTrap	Chad;
	Chad = Bob;

	Bob.attack("BigBadWolf");
	return (0);
}
