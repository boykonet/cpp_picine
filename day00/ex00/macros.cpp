#include <iostream>
# define MAX(x, y, r) (((r) = ((x) >= (y)) ? (x) : (y)))

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	MAX(a, b, c);
	std::cout << c << std::endl;
	return 0;
}
