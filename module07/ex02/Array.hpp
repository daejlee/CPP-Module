#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array{
	private:
		T		*arr;
	public:
				Array();
				Array(const unsigned int n);
				Array(const Array& a);
		Array&	operator=(const Array& a);
				~Array();
};

#endif
