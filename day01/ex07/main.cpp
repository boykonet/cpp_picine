#include "file.hpp"

int			main(int argc, char **argv)
{
	std::string		filename;
	std::string		search;
	std::string		replace;

	filename = argv[1];
	search = argv[2];
	replace = argv[3];
	if (argc == 4)
	{
		if (replaceString(filename, search, replace) == -1)
			return (-1);
	}
	else
	{
		std::cerr << "Error: numbers of files." << std::endl;
		return (-1);
	}
	return (0);
}
