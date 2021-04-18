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
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	std::cout << std::endl;


	std::cout << "assignment - a[3] = 5" << std::endl;
	a[3] = 5;

	std::cout << "Elements of array after assignment:" << std::endl;
	for (unsigned int i = 0; i < size; i++)
	{
		if (i == 3)
				std::cout << "\e[1;35m" << "a[" << i << "] = " << a[i] << "\e[0m";
		else
			std::cout << "a[" << i << "] = " << a[i];
		std::cout << std::endl;
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

	std::cout << std::endl;
	std::cout << "Copy a to vasya:" << std::endl;
	Array<int>			vasya(a);


	size = vasya.size();
	std::cout << "vasya size = " << size << std::endl;

	std::cout << "vasya array:" << std::endl;
	for (unsigned int i = 0; i < size; i++)
	{
		if (i == 3)
			std::cout << "\e[1;35m" << "vasya[" << i << "] = " << vasya[i] << "\e[0m" << std::endl;
		else
			std::cout << "vasya[" << i << "] = " << vasya[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Create empty array:" << std::endl;
	Array<int>			empty;

	size = empty.size();
	for (unsigned int i = 0; i < size; i++)
		std::cout << "empty[" << i << "] = " << empty[i] << std::endl;
	std::cout << std::endl;

	return 0;
}
