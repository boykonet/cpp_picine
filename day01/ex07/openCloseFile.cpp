#include "file.hpp"

int 		closeFile(std::ifstream &ifs, std::ofstream &ofs)
{
	if (ifs.is_open())
		ifs.close();
	if (ofs.is_open())
		ofs.close();
	if (errOpenClose(ifs, ofs, "close") == -1)
		return (-1);
	return (0);
}

int 		openFile(std::ifstream &ifs, std::ofstream &ofs, const std::string filename)
{
	ifs.open(filename);
	ofs.open(filename + ".replace");
	if (errOpenClose(ifs, ofs, "open") == -1)
	{
		closeFile(ifs, ofs);
		return (-1);
	}
	return (0);
}
