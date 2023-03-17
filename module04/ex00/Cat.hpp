#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
protected:
public:
	Cat(void);
	~Cat(void);
	Cat(const Cat &a);
	Cat	&operator= (const Cat &a);
	void	makeSound(void);
};

#endif