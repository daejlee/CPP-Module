#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>

typedef struct s_Data
{
	int		intData;
	float	floatData;
	char	charData;
	double	doubleData;
} Data;

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
