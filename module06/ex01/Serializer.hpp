#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
// # include <cstdlib>
// # include <cmath>

typedef struct s_Data
{
	int		intData;	//4byte
	float	floatData;	//4byte
	char	charData;	//1byte
	double	doubleData;	//8byte
} Data;
size_t	a;

class Serializer{
	private:
	public:
					Serializer(void);
					Serializer(const Serializer& a);
		Serializer&	operator=(const Serializer& a);
					~Serializer(void);
		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
};

#endif
