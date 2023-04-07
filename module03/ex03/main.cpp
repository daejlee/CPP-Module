#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Bob;
	DiamondTrap	Rick("Rick");
	DiamondTrap	John(Bob);
	DiamondTrap	Chad;
	Chad = Bob;

	Bob.whoAmI();
	Bob.attack("BigBadWolf");
	Bob.beRepaired(5);
	John.whoAmI();
	John.attack("BigBadWolf");
	John.beRepaired(5);
	Rick.whoAmI();
	Rick.attack("BigBadWolf");
	Rick.beRepaired(5);
	return (0);
}
