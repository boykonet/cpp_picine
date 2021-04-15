#include <iostream>
#include <string>
#include "Data.hpp"

Data		*deserialize(void *raw)
{
	std::string 	s1[sizeof(std::string)];
	std::string 	s2[sizeof(std::string)];
	int 			n;
	void 			*p;
	char 			*pp;
	Data	*ptr;
	pp = reinterpret_cast<char*>(raw);

	p = &s1;
	memcpy(p, pp, sizeof(std::string));
	std::cout << s1 << std::endl;
	ptr->setStr1(reinterpret_cast<std::string const&>(p));
	p = &n;
	memcpy(p, pp + sizeof(std::string), sizeof(int));
	ptr->setInt(n);
	p = &s2;
	memcpy(p, pp, sizeof(std::string));
	ptr->setStr2(reinterpret_cast<std::string const&>(p));
	return ptr;
}