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
							Serializer(void);
							Serializer(const Serializer& a);
		Serializer&			operator=(const Serializer& a);
							~Serializer(void);
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
