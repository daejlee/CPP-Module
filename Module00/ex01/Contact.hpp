#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	private:
		std::string	fst_name;
		std::string	lst_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	dkst_secret;
	public:
		void	InvalidInput(void);
		void	AddContact(void);
		void	PrintContact(int idx);
		void	PrintContactLine(void);
};

#endif