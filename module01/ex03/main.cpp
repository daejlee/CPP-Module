
#include "HumanA.hpp"
#include "HumanB.hpp"

//ptr and ref. What's difference?

int	main(void)
{
	{
		Weapon	club = Weapon("clude spiked club");

		HumanA	bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
