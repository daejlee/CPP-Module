#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>(){
	std::cout << "MutantStack default constructor called." << std::endl;
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack& a) : std::stack<T, Container>(a){
	std::cout << "MutantStack copy constructor called." << std::endl;
	*this = a;
}

template <class T, class Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack& a){
	std::cout << "MutantStack assignment operator overloading called." << std::endl;
	this->c = a.c;
	return *this;
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(){std::cout << "MutantStack default destructor called." << std::endl;}

#endif