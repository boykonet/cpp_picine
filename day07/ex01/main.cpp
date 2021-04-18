#include <iostream>
#include "iter.hpp"

void 		print(int a)
{
	std::cout << a << std::endl;
}

int 		main()
{
	int 	a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	iter(a, 5, print);
}
