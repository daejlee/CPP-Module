
#include "Contact.hpp"

void	Contact::InvalidInput()
{
	std::cout << "field cannot be empty !!" << std::endl;
	exit (0);
}

void	Contact::AddContact()
{
	std::cout << "enter fst_name: ";
	std::getline(std::cin, fst_name);
	if (!fst_name.length())
		InvalidInput();
	std::cout << "enter lst_name: ";
	std::getline(std::cin, lst_name);
	if (!lst_name.length())
		InvalidInput();
	std::cout << "enter nickname: ";
	std::getline(std::cin, nickname);
	if (!nickname.length())
		InvalidInput();
	std::cout << "enter phone_num: ";
	std::getline(std::cin, phone_num);
	if (!phone_num.length())
		InvalidInput();
	std::cout << "enter dkst_secret: ";
	std::getline(std::cin, dkst_secret);
	if (!dkst_secret.length())
		InvalidInput();
}

void	Contact::PrintContact(int idx)
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

void	Contact::PrintContactLine()
{
	std::cout << "fst_name: " << fst_name << std::endl;
	std::cout << "lst_name: " << lst_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone_num: " << phone_num << std::endl;
	std::cout << "dkst_secret: " << dkst_secret << std::endl;
}
