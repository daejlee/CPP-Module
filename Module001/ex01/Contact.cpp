
#include "Contact.hpp"

std::string	Contact::getInput(void)
{
	std::string	ret;
	std::cin.clear();
	clearerr(stdin);
	std::getline(std::cin, ret);
	while (!ret.length())
	{
		std::cout << "field cannot be empty !!" << std::endl;
		std::cin.clear();
		clearerr(stdin);
		std::getline(std::cin, ret);
	}
	return (ret);
}

void	Contact::addContact(void)
{
	std::cout << "enter fst_name: ";
	fst_name = getInput();
	std::cout << "enter lst_name: ";
	lst_name = getInput();
	std::cout << "enter nickname: ";
	nickname = getInput();
	std::cout << "enter phone_num: ";
	phone_num = getInput();
	std::cout << "enter dkst_secret: ";
	dkst_secret = getInput();
}

void	Contact::printContact(int idx)
{
	std::cout << std::setfill(' ') << std::setw(10) << idx << "|";
	if (fst_name.size() > 9)
		std::cout << fst_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << fst_name << "|";
	if (lst_name.size() > 9)
		std::cout << lst_name.substr(0, 9) << "."  << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << lst_name << "|";
	if (nickname.size() > 9)
		std::cout << nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << nickname << std::endl;
}

void	Contact::printContactLine(void)
{
	std::cout << "fst_name: " << fst_name << std::endl;
	std::cout << "lst_name: " << lst_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone_num: " << phone_num << std::endl;
	std::cout << "dkst_secret: " << dkst_secret << std::endl;
}
