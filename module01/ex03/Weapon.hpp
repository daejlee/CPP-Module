#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string input_type);
		std::string const	&getType(void);
		void				setType(std::string new_type);
};
#endif