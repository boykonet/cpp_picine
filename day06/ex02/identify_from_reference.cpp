#include "Classes.hpp"
#include <iostream>

void			identify_from_reference(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}

}