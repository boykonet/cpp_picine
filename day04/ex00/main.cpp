#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Pony.hpp"

void 		subject()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > SUBJECT < < < < < < < < < <" << "\e[0m" << std::endl;
	Sorcerer		robert("Robert", "the Magnificent");
	Victim			jim("Jimmy");
	Peon			joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
}

void 		my()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > MY < < < < < < < < < <" << "\e[0m" << std::endl;
	std::cout << "\e[1;35m" << "Сreate Valera and copy Valera" << "\e[0m" << std::endl;
	Sorcerer		valera("Valera", "the Magnificent");
	Sorcerer		va(valera);

	std::cout << "\e[1;35m" << "Сreate Pony and copy Pony" << "\e[0m" << std::endl;
	Pony			pony("Pony");
	Pony			poo(pony);

	std::cout << "\e[1;35m" << "Сreate Peon and copy Peon" << "\e[0m" << std::endl;
	Peon			peon("Peon");
	Peon			pee(peon);

	std::cout << "\e[1;35m" << "Сreate Pe and Po" << "\e[0m" << std::endl;
	Victim			*pe = new Peon("Pe");
	Victim			*po = new Pony("Po");

	std::cout << valera << pony << *pe << *po;

	valera.polymorph(pony);
	valera.polymorph(*pe);
	valera.polymorph(*po);
	delete pe;
	delete po;
}

int			main()
{
	subject();
	my();
	return 0;
}
