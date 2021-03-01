#include "Pony.hpp"

Pony::Pony(std::string n, std::string b, std::string y) : name(n), breed(b), yearsOld(y)
{
	std::cout << "Call constructor." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Call destructor." << std::endl;
}

void		Pony::ponyOnTheHeap()
{
	Pony	*pony = new Pony("Alise", "Pony", "five");

	std::cout << "Hello, my name is " << pony->name << " and I am is " << pony->breed << "!";
	std::cout << " I am " << pony->yearsOld << " years old!" << std::endl;

	delete pony;
}

void		Pony::ponyOnTheStack()
{
	Pony	pony = Pony("Felix", "Pony", "two");

	std::cout << "Hello, my name is " << pony.name << " and I am is " << pony.breed << "!";
	std::cout << " I am " << pony.yearsOld << " years old!" << std::endl;
}
