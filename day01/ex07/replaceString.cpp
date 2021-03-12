#include "file.hpp"

int 		replaceString(const std::string filename, \
			const std::string search, const std::string replace)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	std::size_t 	pos;

	if (errFilenameStr(filename, search, replace) == -1)
		return (-1);
	else
	{
		if (openFile(ifs, ofs, filename) == -1)
			return (-1);
		std::getline(ifs, str, ifs.widen(EOF));
		while ((pos = str.find(search)) != std::string::npos)
			str.replace(pos, search.length(), replace);
		ofs << str;
		if (closeFile(ifs, ofs) == -1)
			return (-1);
	}
	return (0);
}