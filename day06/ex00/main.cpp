#include <iostream>
#include <string>
#include <exception>
#include "Scalar.hpp"
#include <cfloat>

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
				throw Impossible();
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
