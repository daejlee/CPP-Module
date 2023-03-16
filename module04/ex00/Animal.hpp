#ifndef ANIIMAL_HPP
# define ANIIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal(void);
	~Animal(void);
	Animal(const Animal &a);
	Animal	&operator= (const Animal &a);
	void	makeSound(void);
};

#endif