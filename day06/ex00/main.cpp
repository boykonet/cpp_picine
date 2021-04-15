#include <iostream>
#include <string>
#include <exception>
#include "Scalar.hpp"

class				ErrorNum : public std::exception
{
public:
	virtual const char		*what() const throw();
};

const char			*ErrorNum::what() const throw()
{
	return "impossible";
}

int			main(int argc, char **argv)
{
	Scalar		scalar;
	char 		*ptrEnd;
	double 		num;

	try
	{
		if (argc == 2)
		{
			num = strtod(argv[1], &ptrEnd);
			if (*ptrEnd && (*ptrEnd != 'f' || (*ptrEnd == 'f' && *(ptrEnd + 1) != '\0')))
				throw ErrorNum();
			scalar.setDNum(num);
			scalar.exceptionHandler("char");
			scalar.exceptionHandler("int");
			scalar.exceptionHandler("float");
			scalar.exceptionHandler("double");
		}
		else
			std::cerr << "Error: count argc != 2" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "char: " << e.what() << std::endl;
		std::cout << "int: " << e.what() << std::endl;
		std::cout << "float: " << e.what() << std::endl;
		std::cout << "double: " << e.what() << std::endl;
	}
	return (0);
}
