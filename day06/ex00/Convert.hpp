#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cmath>
# include <limits>
# include <iomanip>

class		Convert
{
private:
	long double 		_dnum;
public:
	Convert();
	~Convert();
	Convert(Convert const &o);
	Convert				&operator=(Convert const &o);
	void 				setDNum(double num);
	long double			getDNum() const;
	void 				convertPrintChar() const;
	void 				convertPrintInt() const;
	void 				convertPrintFloat() const;
	void 				convertPrintDouble() const;
	void 				exceptionHandler(std::string const &name) const;
	typedef void 		(Convert::*FuncPtr)() const;
};

class 					NotDisplayable : public std::exception
{
public:
	virtual const char	*what() const throw();
};

class 					Impossible : public std::exception
{
public:
	virtual const char	*what() const throw();
};

#endif