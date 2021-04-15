#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class 		Data
{
private:
	std::string		_str1;
	int 			_num;
	std::string 	_str2;
public:
	Data();
	~Data();
	Data(Data const &o);
	Data				&operator=(Data const &o);
	void 				setStr1(std::string const &str1);
	void 				setInt(int num);
	void 				setStr2(std::string const &str2);
	std::string const	&getStr1() const;
	int 				getInt() const;
	std::string const	&getStr2() const;
};

#endif