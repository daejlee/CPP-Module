#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
				WrongCat(void);
				~WrongCat(void);
				WrongCat(const WrongCat &a);
	WrongCat&	operator= (const WrongCat &a);
	void		makeSound(void) const;
};

#endif