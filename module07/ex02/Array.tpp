#ifndef ARRAY_TPP
# define ARRAY_TPP

/*!
 * @brief
 * Creates an empty array
 */
template <class T>
Array<T>::Array(){
	_arr = new T[0];
	_n = 0;
}

/*!
 * @brief
 * Creates an array of n elements initialized by default.
 * @param n number of elements in array
 */
template <class T>
Array<T>::Array(const unsigned int n){
	_arr = new T[n];
	for (int i = 0; i < n; i++)
		_arr[i] = T();
	_n = n;
}

/*!
 * @brief
 * modifying either original array or its copy after copying musn't affect the other way.
 * @param a reference of Array to copy
 */
template <class T>
Array<T>::Array(const Array& a){
	*this = a;
}

/*!
 * @brief
 * modifying either original array or its copy after copying musn't affect the other way.
 * @param a reference of Array to copy
 */
template <class T>
Array<T>&	Array<T>::operator=(const Array& a){
	if (this != &a){
		delete [] _arr;
		_arr = new T[_n];
		for (int i = 0; i < _n; i++)
			_arr[i] = a._arr[i];
	}
	return *this;
}

template <class T>
Array<T>::~Array(){
	delete [] _arr;
}

template <class T>
unsigned int	Array<T>::size() const{
	return _n;
}

template <class T>
T&	Array<T>::operator[](unsigned int i){
	if (i >= size() || i < 0){
		throw std::out_of_range("Invalid range!");
	}
	else
		return _arr[i];
}

#endif