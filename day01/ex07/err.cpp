#include "file.hpp"

int 		errOpenClose(std::ifstream &ifs, std::ofstream &ofs, std::string err)
{
	if (ifs && ifs.fail())
	{
		std::cerr << "Error: " << err << " file" << std::endl;
		return (-1);
	}
	if (ofs && ofs.fail())
	{
		std::cerr << "Error: " << err << " file" << std::endl;
		return (-1);
	}
	return (0);
}

int 		errFilenameStr(const std::string filename, \
			const std::string search, const std::string replace)
{
	if (filename == "")
	{
		std::cerr << "Error: filename is empty." << std::endl;
		return (-1);
	}
	else if (search == "")
	{
		std::cerr << "Error: s1 is empty." << std::endl;
		return (-1);
	}
	else if (replace == "")
	{
		std::cerr << "Error: s2 is empty." << std::endl;
		return (-1);
	}
	return (0);
}
