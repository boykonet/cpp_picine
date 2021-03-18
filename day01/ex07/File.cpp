#include "File.hpp"

File::File(std::string f, std::string s, std::string r, std::ifstream &ifs, std::ofstream &ofs) : _filename(f), _search(s), _replace(r), _ifs(ifs), _ofs(ofs)
{
}

File::~File()
{
}

std::ifstream		&File::getIfs() const
{
	return this->_ifs;
}

std::ofstream		&File::getOfs() const
{
	return this->_ofs;
}

std::string			File::getFilename() const
{
	return this->_filename;
}

std::string			File::getSearch() const
{
	return this->_search;
}

std::string			File::getReplace() const
{
	return this->_replace;
}

int		File::closeIfs()
{
	if (this->_ifs.is_open())
		this->_ifs.close();
	if (this->errOpenCloseIfs("close") == -1)
		return (-1);
	return (0);
}

int		File::closeOfs()
{
	if (this->_ofs.is_open())
		this->_ofs.close();
	if (this->errOpenCloseOfs("close") == -1)
		return (-1);
	return (0);
}

int 		File::openIfs()
{
	this->_ifs.open(this->_filename);
	if (this->errOpenCloseIfs("open") == -1)
		return (-1);
	return (0);
}

int 		File::openOfs()
{
	this->_ofs.open(this->_filename + ".replace");
	if (this->errOpenCloseOfs("open") == -1)
		return (-1);
	return (0);
}

int 		File::errOpenCloseIfs(std::string err)
{
	if (this->_ifs.fail())
	{
		std::cerr << "Error: " << err << " file" << std::endl;
		return (-1);
	}
	return (0);
}

int 		File::errOpenCloseOfs(std::string err)
{
	if (this->_ofs.fail())
	{
		std::cerr << "Error: " << err << " file" << std::endl;
		return (-1);
	}
	return (0);
}

int 		File::errParams()
{
	if (this->_filename == "")
	{
		std::cerr << "Error: filename is empty." << std::endl;
		return (-1);
	}
	else if (this->_search == "")
	{
		std::cerr << "Error: s1 is empty." << std::endl;
		return (-1);
	}
	else if (this->_replace == "")
	{
		std::cerr << "Error: s2 is empty." << std::endl;
		return (-1);
	}
	return (0);
}
