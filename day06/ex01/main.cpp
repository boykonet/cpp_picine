#include <iostream>
#include <string>
#include "Data.hpp"

void		*serialize(void);
Data		*deserialize(void *raw);

int			main(void)
{
	void 	*ptr;
	Data	*dptr;

	ptr = serialize();
	dptr = deserialize(ptr);
	std::cout << "string1 = " << dptr->getStr1() << ", number = "
	<< dptr->getInt() << ", string2 = " << dptr->getStr2() << std::endl;
	return (0);
}