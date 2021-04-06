#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void 			subject()
{
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
}

void 			my()
{
	;
}

int				main()
{
	subject();
	my();

	return 0;
}