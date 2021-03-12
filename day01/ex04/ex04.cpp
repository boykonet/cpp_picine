#include <iostream>
#include <string>

int			main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*a = &str;
	std::string		&b = str;

	std::cout << "pointer: " << *a << std::endl;
	std::cout << "reference: " << b << std::endl;
	return (0);
}
