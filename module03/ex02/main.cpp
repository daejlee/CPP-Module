#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "-------Constructor / Destructor test start-------" << std::endl;
	FragTrap	Anonymous;
	FragTrap	Jim("Jim");
	FragTrap	ArtyJim = Jim;
	std::cout << "-------Constructor / Destructor test start-------" << std::endl;
	
	std::cout << "-------member function test start-------" << std::endl;
	Anonymous.attack("Mutated Frog");
	Anonymous.beRepaired(2);
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");
	Jim.highFivesGuys();
	std::cout << "-------member function test end-------\n" << std::endl;
	return (0);
}
