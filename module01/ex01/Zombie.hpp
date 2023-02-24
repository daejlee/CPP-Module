#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;
	public:
		void	announce(void);
		void	set_name(std::string input_name);
		Zombie(void);
		Zombie(std::string input_name);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
