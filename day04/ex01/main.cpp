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
	std::cout << std::endl;
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
	std::cout << std::endl;
}

void 		my()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > >    MY   < < < < < < < < < <" << "\e[0m" << std::endl;
	std::cout << std::endl;
	Character		*me = new Character("me");

	std::cout << "\e[1;33m" << "Create RadScorpion and copy RadScorpion" << "\e[0m" << std::endl;
	RadScorpion		*s = new RadScorpion();
	RadScorpion		*ss = new RadScorpion(*s);
	std::cout << "s has " << s->getHP() << " HP and ss has " << ss->getHP() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << "\e[1;33m" << "Delete RadScorpion and copy RadScorpion" << "\e[0m" << std::endl;
	delete s;
	delete ss;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Create SuperMutant and copy SuperMutant" << "\e[0m" << std::endl;
	SuperMutant		*m = new SuperMutant();
	SuperMutant		*mm = new SuperMutant(*m);
	std::cout << "m has " << m->getHP() << " HP and mm has " << mm->getHP() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << "\e[1;33m" << "Delete SuperMutant and copy SuperMutant" << "\e[0m" << std::endl;
	delete m;
	delete mm;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Create PlasmaRifle and copy PlasmaRifle" << "\e[0m" << std::endl;
	PlasmaRifle		*prr = new PlasmaRifle();
	PlasmaRifle		*ppr = new PlasmaRifle(*prr);
	std::cout << "PlasmaRifle prr has " << prr->getAPCost() << " AP and has " << prr->getDamage() \
	<< " damage and PlasmaRifle ppr has " << ppr->getAPCost() << " AP and has " << ppr->getDamage() << " damage!" << std::endl;
	std::cout << std::endl;
	std::cout << "\e[1;33m" << "Delete PlasmaRifle and copy PlasmaRifle" << "\e[0m" << std::endl;
	delete prr;
	delete ppr;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Create PowerFist and copy PowerFist" << "\e[0m" << std::endl;
	PowerFist		*pff = new PowerFist();
	PowerFist		*ppf = new PowerFist(*pff);
	std::cout << "PowerFist pff has " << pff->getAPCost() << " AP and has " << pff->getDamage() \
	<< " damage and PowerFist ppf has " << ppf->getAPCost() << " AP and has " << ppf->getDamage() << " damage!" << std::endl;
	std::cout << std::endl;
	std::cout << "\e[1;33m" << "Delete PowerFist and copy PowerFist" << "\e[0m" << std::endl;
	delete pff;
	delete ppf;
	std::cout << std::endl;

	std::cout << "\e[1;31m" << "THE GAME STARTED" << "\e[0m" << std::endl;
	Enemy			*scorpion = new RadScorpion();
	Enemy			*mutant = new SuperMutant();

	AWeapon			*pr = new PlasmaRifle();
	AWeapon			*pf = new PowerFist();

	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "\e[1;36m" << "Round " << i << "\e[0m" << std::endl;
		if (!(i % 2))
		{
			me->equip(pr);
			std::cout << *me;
			if (i == 2)
			{
				std::cout << "\e[1;33m" << "Create copy me - Character you" << "\e[0m" << std::endl;
				Character		*you = new Character (*me);
				std::cout << "\e[1;33m" << *you << "\e[0m";
				delete you;
			}
		}
		else
		{
			me->equip(pf);
			std::cout << *me;
		}
		if (me->getAP() < me->getAWeapon()->getAPCost())
		{
			for (int i = 0; me->getAP() < 40; i++)
				me->recoverAP();
			std::cout << "\e[1;32m" << *me << "\e[0m";
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