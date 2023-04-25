#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
protected:
	std::string		type;
public:
						AMateria(void);
						AMateria(std::string const &type);
	virtual				~AMateria(void);
						AMateria(const AMateria &a);
	AMateria			&operator= (const AMateria &a);

	std::string const &	getType(void) const;	//Returns the materia type
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif