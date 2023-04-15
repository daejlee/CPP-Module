#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "-------Constructor / Destructor test start-------" << std::endl;
	ClapTrap	Anonymous;
	ClapTrap	Jim("Jim");
	ClapTrap	ArtyJim = Jim;
	std::cout << "-------Constructor / Destructor test end-------\n" << std::endl;

	std::cout << "-------member function test start-------" << std::endl;
	Anonymous.attack("Mutated Frog");
	Anonymous.beRepaired(2);
	for (int i = 0; i < 9; i++)
		Anonymous.attack("Mutated Frog");
	Jim.attack("Hydrarisk");
	ArtyJim.attack("Hydrarisk");
	std::cout << "-------member function test end-------\n" << std::endl;

	return (0);
}
