#ifndef ANIIMAL_HPP
# define ANIIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string		type;
public:
							Animal(void);
	virtual					~Animal(void);
							Animal(const Animal &a);
	Animal					&operator= (const Animal &a);
	virtual std::string		getType(void) const;
	virtual void			makeSound(void) const;
};

#endif