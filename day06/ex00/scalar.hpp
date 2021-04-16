#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cmath>
# include <limits>

class		Scalar
{
private:
	long double 	_dnum;
public:
	Scalar();
	~Scalar();
	Scalar(Scalar const &o);
	Scalar			&operator=(Scalar const &o);
	void 			setDNum(double num);
	long double		getDNum() const;
	void 			convertPrintChar() const;
	void 			convertPrintInt() const;
	void 			convertPrintFloat() const;
	void 			convertPrintDouble() const;
	void 			exceptionHandler(std::string const &name) const;
	typedef void 	(Scalar::*FuncPtr)() const;
};

class 			NotDisplayable : public std::exception
{
public:
	virtual const char		*what() const throw();
};
class 			Impossible : public std::exception
{
public:
	virtual const char		*what() const throw();
};

#endif