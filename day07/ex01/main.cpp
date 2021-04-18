#include <iostream>
#include "iter.hpp"

template <typename T>
void 		print(T const &a)
{
	std::cout << a << std::endl;
}

int 		main()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << "TESTS" << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	int 	a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	double 	b[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	float 	c[10] = { 0.00, 1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99 };
	std::string 	d[10] = { "A", "B", "C", "D", "E", "F", "J", "H", "K", "L" };

	std::cout << "\e[1;32m" << "iter for int:" << "\e[0m" << std::endl;
	iter(a, 5, print);
	std::cout << std::endl;

	std::cout << "\e[1;32m" << "iter for double:" << "\e[0m" << std::endl;
	iter(b, 7, print);
	std::cout << std::endl;

	std::cout << "\e[1;32m" << "iter for float:" << "\e[0m" << std::endl;
	iter(c, 10, print);
	std::cout << std::endl;

	std::cout << "\e[1;32m" << "iter for std::string:" << "\e[0m" << std::endl;
	iter(d, 10, print);
}
