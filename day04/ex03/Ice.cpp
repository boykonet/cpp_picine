#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const &type) : AMateria(type)
{
}

Ice::Ice(Ice const &o) : AMateria(o)
{
	*this = o;
}

Ice					&Ice::operator=(Ice const &o)
{
	if (this != &o)
		;
//		*this = AMateria::operator=(o);
	return *this;
}

Ice::~Ice()
{
}

AMateria			*Ice::clone() const
{
	Ice				*a = nullptr;

	*a = *this;
	return a;
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}