#include <iostream>
#include <string>
#include "Array.hpp"

int			main()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << "TESTS" << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	unsigned int 		size;
	Array<int>			a(5);

	size = a.size();
	std::cout << "size array = " << size << std::endl;
	std::cout << "Elements of array before assignment:" << std::endl;
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
	std::cout << "assignment - a[3] = 5" << std::endl;
	a[3] = 5;
	std::cout << "Elements of array after assignment:" << std::endl;
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << "a[" << i << "] = " << a[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
	std::cout << "exception (i == 5):" << std::endl;
	try
	{
		a[5] = 5;
	}
	catch(std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}
	std::cout << "exception (i == -1):" << std::endl;
	try
	{
		a[-1] = 5;
	}
	catch(std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}

	Array<int>			vasya(5);

	vasya = a;

	return 0;
}
