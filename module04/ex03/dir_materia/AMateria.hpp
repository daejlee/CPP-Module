#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "Brain.hpp"

class AMateria
{
protected:
	std::string		type;
public:
							AMateria(void);
	virtual					~AMateria(void);
							AMateria(const AMateria &a);
	AMateria				&operator= (const AMateria &a);
	std::string const &		getType(void) const;
	virtual void			use(ICharacter& target);
};

#endif