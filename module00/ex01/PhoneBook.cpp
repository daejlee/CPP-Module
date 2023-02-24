#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	cnt = 0;
}

void	PhoneBook::printIdxLine(void)
{
	int	idx = 0;
	std::string	buf = getInput();
	std::stringstream ss(buf);
	while (!(ss >> idx))
	{
		std::cout << "index must be decimal !" << std::endl << "please retype: ";
		buf = getInput();
		ss.str("");
		ss.clear();
		ss.str(buf);
	}
	if (cnt > 8)
	{
		while (idx < 0 || idx > 7)
		{
			std::cout << "idx out of range !" << std::endl << "please retype: ";
			buf = getInput();
			ss.str("");
			ss.clear();
			ss.str(buf);
			while (!(ss >> idx))
			{
				std::cout << "index must be decimal !" << std::endl << "please retype: ";
				buf = getInput();
				ss.str("");
				ss.clear();
				ss.str(buf);
			}
		}
	}
	while (idx < 0 || idx >= cnt)
	{
		std::cout << "idx out of range !" << std::endl << "please retype: ";
		buf = getInput();
		ss.str("");
		ss.clear();
		ss.str(buf);
		while (!(ss >> idx))
		{
			std::cout << "index must be decimal !" << std::endl << "please retype: ";
			buf = getInput();
			ss.str("");
			ss.clear();
			ss.str(buf);
		}
	}
	Contact[idx].printContactLine();
}

void	PhoneBook::printContactLst(void)
{
	int	tmp = cnt;
	std::cout << "     index|  fst_name|  lst_name|  nickname" << std::endl;
	while (tmp > 7)
		tmp -= 8;
	if (cnt < 8)
	{
		for (int i = 0; i < cnt; i++)
			Contact[i].printContact(i);
	}
	else
	{
		for (int i = 0; i < 8; i++)
			Contact[i].printContact(i);
	}
}

std::string	PhoneBook::getInput(void)
{
	std::string	ret;
	std::cin.clear();
	clearerr(stdin);
	std::getline(std::cin, ret);
	while (!ret.length())
	{
		std::cout << "field cannot be empty !!" << std::endl << "please retype: ";
		std::cin.clear();
		clearerr(stdin);
		std::getline(std::cin, ret);
	}
	return (ret);
}

void	PhoneBook::Add(void)
{
	if (cnt > 7)
	{
		int	tmp = cnt;
		while (tmp > 7)
			tmp -= 8;
		Contact[tmp].addContact();
	}
	else
		Contact[cnt].addContact();
	cnt++;
}

void	PhoneBook::Search(void)
{
	if (!cnt)
	{
		std::cout << "No contacts to search!" << std::endl;
		return ;
	}
	printContactLst();
	std::cout << "enter idx to display: ";
	printIdxLine();
}

void	PhoneBook::Exit(void)
{
	exit(0);
}
