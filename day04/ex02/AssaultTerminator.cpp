#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &o)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = o;
}

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &o)
{
	if (this != &o)
	{
		;
	}
	return *this;
}

ISpaceMarine				*AssaultTerminator::clone() const
{
	ISpaceMarine			*a;

	a = this->_a;
	return a;
}

void						AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void						AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void						AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}