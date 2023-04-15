#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "-------Constructor / Destructor test start-------" << std::endl;
	ScavTrap	Anonymous;
	ScavTrap	Jim("Jim");
	ScavTrap	ArtyJim = Jim;
	std::cout << "-------Constructor / Destructor test end-------\n" << std::endl;
	
	std::cout << "-------member function test start-------" << std::endl;
	Anonymous.attack("Mutated Frog");
	Anonymous.beRepaired(2);
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");
	std::cout << "-------member function test end-------\n" << std::endl;
	return (0);
}
