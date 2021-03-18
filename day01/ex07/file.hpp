#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <iostream>
# include <fstream>

class File
{
public:
	File(std::string f, std::string s, std::string r, std::ifstream &ifs, std::ofstream &ofs);
	~File();
	std::ifstream		&getIfs() const;
	std::ofstream		&getOfs() const;
	std::string			getFilename() const;
	std::string			getSearch() const;
	std::string			getReplace() const;
	int					closeIfs();
	int					closeOfs();
	int					openIfs();
	int					openOfs();
	int					errOpenCloseIfs(std::string err);
	int					errOpenCloseOfs(std::string err);
	int					errParams();

private:
	std::string			_filename;
	std::string			_search;
	std::string			_replace;
	std::ifstream		&_ifs;
	std::ofstream		&_ofs;
};

#endif
