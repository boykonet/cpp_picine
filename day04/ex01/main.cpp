#include <iostream>
#include <string>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

void 		subject()
{
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
}

int			main()
{
	subject();
	return 0;
}