#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "-------Constructor / Destructor test start-------" << std::endl;
	DiamondTrap	Bob;
	DiamondTrap	Rick("Rick");
	DiamondTrap	John(Rick);
	DiamondTrap	Chad;
	Chad = John;
	std::cout << "-------Constructor / Destructor test end-------\n" << std::endl;

	std::cout << "-------member function test start-------" << std::endl;
	Bob.whoAmI();
	Bob.attack("BigBadWolf");
	Bob.beRepaired(5);
	John.whoAmI();
	John.attack("BigBadWolf");
	John.beRepaired(5);
	Rick.whoAmI();
	Rick.attack("BigBadWolf");
	Rick.beRepaired(5);
	std::cout << "-------member function test end-------\n" << std::endl;
	return (0);
}
