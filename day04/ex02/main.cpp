#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int				main()
{
	ISpaceMarine		*bob = new TacticalMarine;
	ISpaceMarine		*jim = new AssaultTerminator;

	ISquad				*vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
//		std::cout << "e1" << std::endl;
		ISpaceMarine	*cur = vlc->getUnit(i);
//		std::cout << "e2" << std::endl;
		cur->battleCry();
//		std::cout << "e3" << std::endl;
		cur->rangedAttack();
//		std::cout << "e4" << std::endl;
		cur->meleeAttack();
//		std::cout << "e5" << std::endl;
	}
	delete vlc;

	return 0;
}