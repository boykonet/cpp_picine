#include <iostream>
#include <string>
#include "Base.hpp"

Base			*generate(void);

int				main()
{
	Base		*ptr;

	ptr = generate();
//	std::cout << ptr->getName() << std::endl;
	return 0;
}
