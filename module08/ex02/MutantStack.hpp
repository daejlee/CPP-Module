#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <iostream>
# include <stack>

template <class T>
class MutantStack : public std::stack<T>{
	private:
	public:
						MutantStack();
						MutantStack(const MutantStack& a);
		MutantStack&    operator=(const MutantStack& a);
						~MutantStack();
		static typename iterator;
};

# include "MutantStack.tpp"
#endif