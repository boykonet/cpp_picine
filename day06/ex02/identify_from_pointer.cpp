#include "Classes.hpp"
#include <iostream>

void			identify_from_pointer(Base *p)
{
	A			*a;
	B			*b;
	C			*c;

	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}