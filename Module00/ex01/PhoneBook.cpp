#include "PhoneBook.hpp"

void	PhoneBook::init()
{
	cnt = 0;
}

void	PhoneBook::Add()
{
	if (cnt > 7)
	{
		int	tmp = cnt;
		while (tmp > 7)
			tmp -= 8;
		Contact[tmp].AddContact();
	}
	else
		Contact[cnt].AddContact();
	cnt++;
}

void	PhoneBook::PrintIdxLine()
{
	int	idx;
	std::cin >> idx;
	if (std::cin.fail())
	{
		std::cout << "index must be decimal!" << std::endl;
		exit(0);
	}
	char	c;
	std::cin >> std::noskipws >> c;
	if (cnt > 8)
	{
		if (idx < 0 || idx > 7)
			std::cout << "idx out of range !" << std::endl;
		else
			Contact[idx].PrintContactLine();
	}
	else if (idx < 0 || idx >= cnt)
		std::cout << "idx out of range !" << std::endl;
	else
		Contact[idx].PrintContactLine();
}

void	PhoneBook::PrintContactList()
{
	int	tmp = cnt;
	std::cout << "     index|  fst_name|  lst_name|  nickname" << std::endl;
	while (tmp > 7)
		tmp -= 8;
	if (cnt < 8)
	{
		for (int i = 0; i < cnt; i++)
			Contact[i].PrintContact(i);
	}
	else
	{
		for (int i = 0; i < 8; i++)
			Contact[i].PrintContact(i);
	}
}

void	PhoneBook::Search()
{
	if (!cnt)
	{
		std::cout << "No contacts to search!" << std::endl;
		return ;
	}
	PrintContactList();
	std::cin.clear();
	std::cout << "enter idx to display: ";
	PrintIdxLine();
}

void	PhoneBook::Exit()
{
	exit(0);
}
