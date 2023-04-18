#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
protected:
	std::string				ideas[100];
public:
							Brain(void);
							~Brain(void);
							Brain(const Brain &a);
	Brain					&operator= (const Brain &a);
	std::string				getIdea(int n) const;
};

#endif