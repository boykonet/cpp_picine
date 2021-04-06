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
	return new Cure (*this);
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}