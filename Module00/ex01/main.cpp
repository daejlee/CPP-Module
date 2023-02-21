
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;

	std::string	buf;
	pb.init();
	while (1)
	{
		std::cout << "enter cmd: ";
		std::getline(std::cin, buf);
		if (!buf.length())
		{
			std::cout << "field cannot be empty !!" << std::endl;
			exit (0);
		}
		else if (!buf.compare("ADD"))
			pb.Add();
		else if (!buf.compare("SEARCH"))
			pb.Search();
		else if (!buf.compare("EXIT"))
			pb.Exit();
		else
			std::cout << "invalid cmd.. please try agian." << std::endl;
	}
}
