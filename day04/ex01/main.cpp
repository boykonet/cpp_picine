#include <iostream>
#include <string>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

void 		subject()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > SUBJECT < < < < < < < < < <" << "\e[0m" << std::endl;
	Character		*me = new Character("me");

	std::cout << *me;

	Enemy			*b = new RadScorpion();

	AWeapon			*pr = new PlasmaRifle();
	AWeapon			*pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete me;
	delete pr;
	delete pf;
}

void 		my()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > MY < < < < < < < < < <" << "\e[0m" << std::endl;
	Character		*me = new Character("me");

	Enemy			*scorpion = new RadScorpion();
	Enemy			*mutant = new SuperMutant();

	AWeapon			*pr = new PlasmaRifle();
	AWeapon			*pf = new PowerFist();

	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!(i % 2))
		{
			me->equip(pr);
			std::cout << *me;
		}
		else
		{
			me->equip(pf);
			std::cout << *me;
		}
		if (!(i % 2))
		{
			me->attack(scorpion);
			std::cout << *me;
		}
		else
		{
			me->attack(mutant);
			std::cout << *me;
		}
		std::cout << std::endl;
		if (me->getAP() < 10)
			me->recoverAP();
	}
	delete me;
	delete pr;
	delete pf;
}

int			main()
{
	subject();
	my();
	return 0;
}