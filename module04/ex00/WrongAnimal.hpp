#ifndef WRONGANIIMAL_HPP
# define WRONGANIIMAL_HPP
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
							WrongAnimal(void);
	virtual					~WrongAnimal(void);
							WrongAnimal(const WrongAnimal &a);
	WrongAnimal				&operator= (const WrongAnimal &a);
	std::string				getType(void) const;
	void					makeSound(void) const;
};

#endif