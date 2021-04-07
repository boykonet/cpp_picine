#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void 			subject()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > SUBJECT < < < < < < < < < <" << "\e[0m" << std::endl;
	std::cout << std::endl;
	ISpaceMarine		*bob = new TacticalMarine;
	ISpaceMarine		*jim = new AssaultTerminator;

	ISquad				*vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << std::endl;
}

void 			my()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > >    MY   < < < < < < < < < <" << "\e[0m" << std::endl;
	std::cout << std::endl;
	ISpaceMarine		*bob = new TacticalMarine;
	ISpaceMarine		*jim = new AssaultTerminator;
	std::cout << "\e[1;33m" << "Create TacticalMarine bobClone and AssaultTerminator jimClone" << "\e[0m" << std::endl;
	ISpaceMarine		*bobClone = bob->clone();
	ISpaceMarine		*jimClone = jim->clone();

	ISquad				*sq = new Squad;
	ISpaceMarine		*cur;

	std::cout << "\e[1;33m" << "Check return value from push() method" << "\e[0m" << std::endl;
	std::cout << "Push bob. Count units of the squad = " << sq->push(bob) << std::endl;
	std::cout << "Push jim. Count units of the squad = " << sq->push(jim) << std::endl;
	std::cout << "Push bobClone. Count units of the squad = " << sq->push(bobClone) << std::endl;
	std::cout << "Push jimClone. Count units of the squad = " << sq->push(jimClone) << std::endl;
	std::cout << "\e[1;33m" << "Check null pointer in getUnit() method - " << "\e[0m";
	std::cout << sq->getUnit(4) << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < sq->getCount(); ++i)
	{
		std::cout << "\e[1;33m" << "count = " << i << "\e[0m" << std::endl;
		cur = sq->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}
	delete sq;
}

int				main()
{
	subject();
	my();

	return 0;
}