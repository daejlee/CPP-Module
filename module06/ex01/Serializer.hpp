#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <stdint.h>

typedef struct s_Data
{
	int		intData;
	float	floatData;
	char	charData;
	double	doubleData;
} Data;

class Serializer{
	private:
							Serializer(void);
							Serializer(const Serializer& a);
		Serializer&			operator=(const Serializer& a);
	public:
							~Serializer(void);
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
