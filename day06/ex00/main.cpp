#include <iostream>
#include <string>
#include <exception>
#include "Scalar.hpp"

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
			if (&ptrEnd[0] == &argv[1][0]
			&& static_cast<std::string>(argv[1]).length() == 1)
				num = *ptrEnd;
			if ((isprint(*ptrEnd) && static_cast<std::string>(argv[1]).length() != 1)
			&& !(&ptrEnd[0] != &argv[1][0]
			&& *ptrEnd == 'f'
			&& static_cast<std::string>(ptrEnd).length() == 1))
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
