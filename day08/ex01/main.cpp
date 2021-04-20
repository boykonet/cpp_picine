#include <iostream>
#include <string>
#include "span.hpp"

void 		subject()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << "S U B J E C T" << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	Span	sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void 		my()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << " M Y " << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::srand(std::time(NULL));

	std::cout << "Create sp with 10000 elements:" << std::endl;
	Span			sp(10000);

	for (int i = 0; i < 10000; i++)
		sp.addNumber(std::rand()%std::numeric_limits<int>::max());

	try
	{
		std::cout << "Exception: ";
		sp.addNumber(11);
	}
	catch(std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Shortest num: ";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "Longest num: ";
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;


	std::cout << "Create sp1 with 1 elements:" << std::endl;
	Span			sp1(1);

	sp1.addNumber(11);
	try
	{
		std::cout << "Shortest num: ";
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Longest num: ";
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Create span with 5 elements" << std::endl;

	std::vector<int>			vector;
	std::vector<int>::iterator	itb;
	std::vector<int>::iterator	ite;
	Span			span(5);

	// Add 4 elements in vector
	vector.push_back(5);
	vector.push_back(10);
	vector.push_back(77);
	vector.push_back(68);
//	vector.push_back(99);

	// Add 2 elements in span

	span.addNumber(12);
	span.addNumber(55);

	itb = vector.begin();
	ite = vector.end();

	std::cout << "Add 6 elements to span:" << std::endl;
	try
	{
		span.generate(itb, ite);
	}
	catch (std::exception &e)
	{
		std::cout << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}

}

int			main()
{
	subject();
	my();
}