#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &o) : AMateria(o)
{
	*this = o;
}

Cure				&Cure::operator=(Cure const &o)
{
	if (this != &o)
		AMateria::operator=(o);
	return *this;
}

Cure::~Cure()
{
}

AMateria			*Cure::clone() const
{
	Cure			*a = nullptr;

	*a = *this;
	return a;
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}