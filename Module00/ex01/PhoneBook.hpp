#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		int			cnt;
		Contact		Contact[8];
		void		printIdxLine(void);
		void		printContactLst(void);
	public:
					PhoneBook(void);
		std::string	getInput(void);
		void		Add(void);
		void		Search(void);
		void		Exit(void);
};

#endif