#ifndef FILE_HPP
# defile FILE_HPP

# include <iostream>
# include <fstream>

int				replaceString(const std::string filename, \
				const std::string search, const std::string replace);

int				openFile(std::ifstream &ifs, \
				std::ofstream &ofs, const std::string filename);
int				closeFile(std::ifstream &ifs, std::ofstream &ofs);

int				errOpenClose(std::ifstream &ifs, \
				std::ofstream &ofs, std::string err);
int				errFilenameStr(const std::string filename, \
				const std::string search, const std::string replace);

#endif
