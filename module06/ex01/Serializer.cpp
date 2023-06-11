#include "Serializer.hpp"

Serializer::Serializer(void){}

Serializer::Serializer(const Serializer& a){
	if (this != &a){
		;
	}
}

Serializer&	Serializer::operator=(const Serializer& a){
		if (this != &a){
			;
		}
		return (*this);
}

Serializer::~Serializer(void){}

/*!
 * @brief
 * It takes a pointer and converts it to the unsigned integer type uintptr_t
 * @param ptr Data pointer to convert
 * @return Converted unsigned integer type uintptr_t
 */
uintptr_t	Serializer::serialize(Data* ptr){
	uintptr_t	serializedData = reinterpret_cast<uintptr_t>(ptr);
	return (serializedData);
}

/*!
 * @brief
 * It takes an unsigned integer parameter and converts it to a pointer to Data
 * @param raw uintptr_t to convert
 * @return Converted pointer to Data
 */
Data*		Serializer::deserialize(uintptr_t raw){
	Data	*deserializedData = reinterpret_cast<Data *>(raw);
	return (deserializedData);
}