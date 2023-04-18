#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "random_idea";
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
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int n) const
{
	return (ideas[n]);
}
