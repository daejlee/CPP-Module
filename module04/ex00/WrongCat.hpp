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
	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif