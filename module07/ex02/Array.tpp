#ifndef ARRAY_TPP
# define ARRAY_TPP

/*!
 * @brief
 * Creates an empty array
 */
template <class T>
Array<T>::Array(){
	_arr = new [];
	_n = 0;
}

/*!
 * @brief
 * Creates an array of n elements initialized by default.
 * @param n number of elements in array
 */
Array::Array(const unsigned int n){
	_arr = new T[n];
	for (int i = 0; i < n; i++)
		_arr[i] = 0;
	_n = n;
}

/*!
 * @brief
 * modifying either original array or its copy after copying musn't affect the other way.
 * @param a reference of Array to copy
 */
Array::Array(const Array& a){
	_arr = new T[n];
	*this = a;
}

/*!
 * @brief
 * modifying either original array or its copy after copying musn't affect the other way.
 * @param a reference of Array to copy
 */
Array&	Array::operator=(const Array& a){
	if (this != &a){
		for (int i = 0; i < n; i++)
			_arr[i] = a._arr[i];
	}
	return *this;
}

Array::~Array(){
	delete _arr;
}

unsigned int	Array::size() const{
	return _n;
}

T&	Array::operator[](unsigned int i){
	if (i > size()){
		throw std::out_of_range;
	}
	else
		return arr[i];
}

#endif