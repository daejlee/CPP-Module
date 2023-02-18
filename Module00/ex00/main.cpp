
#include <iostream>

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	int	i = 1;
	int	k = 0;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			argv[i][k] = ft_toupper(argv[i][k]);
			k++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
