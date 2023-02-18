
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;

	string	buf;
	pb.init();
	while (1)
	{
		cout << "enter cmd: ";
		getline(cin, buf);
		if (!buf.compare("ADD"))
			pb.Add();
		else if (!buf.compare("SEARCH"))
			pb.Search();
		else if (!buf.compare("EXIT"))
			pb.Exit();
		else
			cout << "invalid cmd.. please try agian." << endl;
	}
}
