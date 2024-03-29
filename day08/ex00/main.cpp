#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int 		main()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << "TESTS" << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::srand(std::time(NULL));

	std::cout << "Create std::vector" << std::endl;
	std::vector<int>	vector;
	int 				size;
	int 				num;
	int 				data;


	size = std::rand()%100;
	num = std::rand()%100;
	std::cout << "Add elements of the vector:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		data = std::rand()%100;
		vector.push_back(data);
		std::cout << "vector[" << "\e[1;32m" << i << "\e[0m"
		<< "] = " << "\e[1;35m" << data << "\e[0m";
		if ((i % 5 || !i) && i < size - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << "\n\n";
	std::cout << "Real elements of the vector:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "vector[" << "\e[1;32m" << i << "\e[0m"
		<< "]" << " = " << "\e[1;35m" << vector.at(i) << "\e[0m";
		if ((i % 5 || !i) && i < size - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Find number " << num << " in vector<int>" << std::endl;
	
	std::vector<int>::iterator		it;
	
	try
	{
		it = easyfind(vector, num);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}