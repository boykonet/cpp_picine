#include <iostream>
#include <string>
#include <string.h>

void		*serialize(void)
{
	std::string 	s1 = "hello";
	int				n = 4;
	std::string 	s2 = "world";
	char 			a[sizeof(std::string) * 2 + sizeof(int)];
	void 			*ptr;

	memset(a, 0, sizeof(std::string) * 2 + sizeof(int));
	ptr = &s1;
	memcpy(&a[0], ptr, sizeof(std::string) - 1);
	ptr = &n;
	memcpy(&a[sizeof(std::string)], ptr, sizeof(int));
	ptr = &s2;
	memcpy(&a[sizeof(std::string) + sizeof(int)], ptr, sizeof(std::string));
	ptr = &a;
	std::cout << a << std::endl;
	return ptr;
}