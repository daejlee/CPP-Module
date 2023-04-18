#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain		*brainPointer;
public:
				Dog(void);
				~Dog(void);
				Dog(const Dog &a);
	Dog&		operator= (const Dog &a);
	const Brain	*getBP(void) const;
	void		makeSound(void) const;
};

#endif