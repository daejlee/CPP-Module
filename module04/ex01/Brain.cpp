#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = a;
}

Brain& Brain::operator= (const Brain &a)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	for (int i; i < 100; i++)
		ideas[i] = a.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int n) const
{
	return (ideas[n]);
}
