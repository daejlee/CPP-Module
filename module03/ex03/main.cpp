#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Bob;
	std::cout << "\n";
	DiamondTrap	John(Bob);
	std::cout << "\n";
	DiamondTrap	Chad;
	std::cout << "\n";
	Chad = Bob;

	Bob.whoAmI();
	Bob.attack("BigBadWolf");
	Bob.beRepaired(5);
	return (0);
}
