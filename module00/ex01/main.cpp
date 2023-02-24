
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;

	std::string	buf;
	while (1)
	{
		std::cout << "enter cmd: ";
		buf = pb.getInput();
		if (!buf.compare("ADD"))
			pb.Add();
		else if (!buf.compare("SEARCH"))
			pb.Search();
		else if (!buf.compare("EXIT"))
			pb.Exit();
		else
			std::cout << "invalid cmd.. please try agian." << std::endl;
	}
}
