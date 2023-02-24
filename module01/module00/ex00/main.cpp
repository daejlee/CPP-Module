
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int	i = 1;
	int	k;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			std::cout << (char)std::toupper(argv[i][k]);
			k++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
