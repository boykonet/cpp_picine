#include "Pony.hpp"

void			ponyOnTheHeap()
{
	Pony		*pony = new Pony("Alise", "Pony", "one");

	std::cout << "Hello, my name is " << pony->getName() << " and I am is " \
		<< pony->getBreed() << "!" << " I am " << pony->getYearsOld() \
		<< " years old!" << std::endl;

	delete pony;
}

void			ponyOnTheStack()
{
	Pony		pony = Pony("Felix", "Pony", "two");

	std::cout << "Hello, my name is " << pony.getName() << " and I am is " \
		<< pony.getBreed() << "!" << " I am " << pony.getYearsOld() \
		<< " years old!" << std::endl;
}


int			main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
