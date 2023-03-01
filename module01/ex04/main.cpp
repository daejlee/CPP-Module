
#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "too many/less args." << std::endl;
		return (0);
	}
	std::string	outputFileName	= argv[1];
	outputFileName.append(".replace");
	std::string	s1				= argv[2];
	std::string	s2				= argv[3];
	std::ifstream				readFile(argv[1]);
	if (!readFile.is_open())
	{
		std::cout << "invalid file name." << std::endl;
		return (1);
	}
	if (!s1.compare(s2))
	{
		std::cout << "both strings are the same." << std::endl;
		return (1);
	}
	if (!s1.length())
	{
		std::cout << "s1 is null." << std::endl;
		return (1);
	}
	std::ofstream				writeFile(outputFileName);
	std::string	buf;
	while (getline(readFile, buf))
	{
		size_t	idx = buf.find(s1);
		while (idx != buf.npos)
		{
			buf.erase(idx, s1.length());
			buf.insert(idx, s2);
			idx = buf.find(idx + s2.length());
		}
		buf.append("\n");
		writeFile << buf;
	}
	readFile.close();
	writeFile.close();
	return (0);
}