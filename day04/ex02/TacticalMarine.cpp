#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &o)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = o;
}

TacticalMarine				&TacticalMarine::operator=(TacticalMarine const &o)
{
	if (this != &o)
	{
		;
	}
	return *this;
}

ISpaceMarine				*TacticalMarine::clone() const
{
	TacticalMarine			a;

	a = *this;
	return &a;
}

void						TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void						TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void						TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}