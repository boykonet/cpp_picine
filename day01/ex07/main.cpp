#include "File.hpp"

int 		replaceString(char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	File			f = File(argv[1], argv[2], argv[3], ifs, ofs);
	std::string		str;
	std::size_t 	pos;

	if (f.errParams() == -1)
		return (-1);
	else
	{
		if (f.openIfs() == -1)
			return (-1);
		std::getline(f.getIfs(), str, f.getIfs().widen(EOF));
		if (f.closeIfs() == -1)
			return (-1);
		while ((pos = str.find(f.getSearch())) != std::string::npos)
			str.replace(pos, f.getSearch().length(), f.getReplace());
		if (f.openOfs() == -1)
			return (-1);
		f.getOfs() << str;
		if (f.closeOfs() == -1)
			return (-1);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (replaceString(argv) == -1)
			return (-1);
	}
	else
	{
		std::cerr << "Error: numbers of argc." << std::endl;
		return (-1);
	}
	return (0);
}
