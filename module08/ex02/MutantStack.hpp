#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <iostream>
# include <stack>
# include <vector>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
	private:
	public:

													MutantStack();
													MutantStack(const MutantStack& a);
		MutantStack&    							operator=(const MutantStack& a);
													~MutantStack();
		typedef typename Container::iterator		iterator;
    	typedef typename Container::const_iterator	const_iterator;
		iterator 									begin() { return std::stack<T, Container>::c.begin(); }
		iterator 									end() { return std::stack<T, Container>::c.end(); }
		const_iterator 								begin() const { return std::stack<T, Container>::c.begin(); }
		const_iterator 								end() const { return std::stack<T, Container>::c.end(); }
};

# include "MutantStack.tpp"
#endif