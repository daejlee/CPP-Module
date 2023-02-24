
#include "Zombie.hpp"

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string input_name)
{
	name = input_name;
}
