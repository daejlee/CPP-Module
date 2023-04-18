#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain		*brainPointer;
public:
				Cat(void);
				~Cat(void);
				Cat(const Cat &a);
	Cat&		operator= (const Cat &a);
	const Brain	*getBP(void) const;
	void		makeSound(void) const;
};

#endif