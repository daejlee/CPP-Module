#ifndef CURE_HPP
# define CURE_HPP

class Cure : public AMateria
{
private:
public:
			Cure(void);
			~Cure(void);
			Cure(const Cure &a);
	Cure	&operator= (const Cure &a);

	Cure*	clone() const;
	void	use(ICharacter& target);
}

#endif