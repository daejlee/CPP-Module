#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact {
	private:
		std::string	fst_name;
		std::string	lst_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	dkst_secret;
	public:
		std::string	getInput(void);
		void		addContact(void);
		void		printContact(int idx);
		void		printContactLine(void);
};

#endif