#include <iostream>
#include <string>
#include "whatever.hpp"

void		subject()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * " << "\e[0m"
	<< "\e[1;35m" << "S U B J E C T" << "\e[0m"
	<< "\e[1;32m" << " * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	int		a = 2;
	int		b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
}

void 		my()
{
	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << " M Y " << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	{
		char 	a = 'a';
		char 	z = 'z';

		std::cout << "Before ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		::swap(a, z);
		std::cout << "After ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		std::cout << "min( a, z ) = " << ::min( a, z ) << std::endl;
		std::cout << "max( a, z ) = " << ::max( a, z ) << std::endl;
		std::cout << std::endl;
	}

	{
		double 	a = 4.45;
		double 	z = -4.45;

		std::cout << "Before ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		::swap(a, z);
		std::cout << "After ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		std::cout << "min( a, z ) = " << ::min( a, z ) << std::endl;
		std::cout << "max( a, z ) = " << ::max( a, z ) << std::endl;
		std::cout << std::endl;
	}

	{
		float 	a = 8.97;
		float 	z = 5.76;

		std::cout << "Before ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		::swap(a, z);
		std::cout << "After ::swap():" << std::endl;
		std::cout << "a = " << a << ", z = " << z << std::endl;
		std::cout << "min( a, z ) = " << ::min( a, z ) << std::endl;
		std::cout << "max( a, z ) = " << ::max( a, z ) << std::endl;
		std::cout << std::endl;
	}
}

int			main(void)
{
	subject();
	my();
	return (0);
}