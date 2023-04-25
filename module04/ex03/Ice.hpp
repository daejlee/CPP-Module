#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
private:
public:
			Ice(void);
			~Ice(void);
			Ice(const Ice &a);
	Ice		&operator= (const Ice &a);

	Ice*	clone() const;
	void	use(ICharacter& target);
}

#endif