#ifndef ANIIMAL_HPP
# define ANIIMAL_HPP
# include "Brain.hpp"

class Animal
{
protected:
	std::string		type;
public:
							Animal(void);
	virtual					~Animal(void);
							Animal(const Animal &a);
	Animal					&operator= (const Animal &a);
	std::string				getType(void) const;
	virtual void			makeSound(void) const;
};

#endif