#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		int	cnt;
		Contact Contact[8];
	public:
		void	init(void);
		void	Add(void);
		void	PrintIdxLine(void);
		void	PrintContactList(void);
		void	Search(void);
		void	Exit(void);
};

#endif