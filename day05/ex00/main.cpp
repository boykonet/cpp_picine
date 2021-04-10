#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

int 		main(void)
{
	Bureaucrat				valera = Bureaucrat("Valera", 150);
	Bureaucrat				svyatoslav = Bureaucrat("Svyatoslav", 1);

	std::cout << "\e[1;33m" << "Сhecking for incorrect input when creating an object (grade == -5)" << "\e[0m" << std::endl;
	try
	{
		Bureaucrat			bureaucrat = Bureaucrat("Sasha", -5);
		std::cout << bureaucrat;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Сhecking for incorrect input when creating an object (grade == 170)" << "\e[0m" << std::endl;
	try
	{
		Bureaucrat			bureaucrat = Bureaucrat("Sasha", 170);
		std::cout << bureaucrat;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Сhecking for correctness of input when increasing the grade of the object (grade > 150)" << "\e[0m" << std::endl;
	try
	{
		std::cout << valera;
		valera.decrease();
		std::cout << valera;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Сhecking for correctness of input when increasing the grade of the object (grade < 1)" << "\e[0m" << std::endl;
	try
	{
		std::cout << svyatoslav;
		svyatoslav.increase();
		std::cout << svyatoslav;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Creating an object (grade == 10) and use increase() and decrease() methods" << "\e[0m" << std::endl;
	try
	{
		Bureaucrat			bureaucrat = Bureaucrat("Bureaucrat", 10);
		std::cout << bureaucrat;
		bureaucrat.increase();
		std::cout << bureaucrat;
		bureaucrat.decrease();
		std::cout << bureaucrat;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Copy constructor" << "\e[0m" << std::endl;
	Bureaucrat				alisa(valera);

	std::cout << alisa << std::endl;

	return 0;
}