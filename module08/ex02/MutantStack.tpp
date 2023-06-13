#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>(){
	std::cout << "MutantStack default constructor called." << std::endl;
	iterator = &this->top();
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& a) : std::stack<T>(a){
	std::cout << "MutantStack copy constructor called." << std::endl;
	*this = a;
}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& a){
	if (this != &a)
		iterator = a._iter;
	return *this;
}

template <class T>
MutantStack<T>::~MutantStack(){std::cout << "MutantStack default destructor called." << std::endl;}

#endif