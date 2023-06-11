#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <class T>
class Array{
	private:
		T				*_arr;
		unsigned int	_n;
	public:
						Array();
						Array(const unsigned int n);
						Array(const Array& a);
		Array&			operator=(const Array& a);
						~Array();
		unsigned int	size() const;
		T				&operator[](unsigned int i);
};

# include "Array.tpp"
#endif
