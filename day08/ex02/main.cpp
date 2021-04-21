#include <iostream>
#include <stack>
#include "mutantstack.hpp"

void 				subject()
{

	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << "S U B J E C T" << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	MutantStack<int>		mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>		s(mstack);
}

void 				my()
{

	std::cout << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * " << "\e[0m"
			  << "\e[1;35m" << " M Y " << "\e[0m"
			  << "\e[1;32m" << " * * * * * * * * * * * *" << std::endl;
	std::cout << "\e[1;32m" << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << "\e[0m" << std::endl;
	std::cout << std::endl;

	MutantStack<int>		alesha;
	MutantStack<int>		vasya;

	alesha.push(7);
	alesha.push(10);
	alesha.push(20);
	alesha.push(49);
	alesha.push(147);
	alesha.push(485);

	vasya.push(7);
	vasya.push(10);
	vasya.push(20);
	vasya.push(49);
	vasya.push(147);
	vasya.push(485);


	MutantStack<int>::iterator	it1 = vasya.begin();
	MutantStack<int>::iterator	ite1 = vasya.end();

	std::cout << "alesha elements: ";
	for (int i = 0; it1 != ite1; i++)
	{
		std::cout << *it1 << " ";
		++it1;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "operator= (vasya = alesha)" << std::endl;
	vasya = alesha;
	MutantStack<int>::iterator	it = vasya.begin();
	MutantStack<int>::iterator	ite = vasya.end();
	std::cout << std::endl;

	std::cout << "vasya elements: ";
	for (int i = 0; it != ite; i++)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

int			main()
{
	subject();
	my();
	return 0;
}