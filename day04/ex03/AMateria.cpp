#include "AMateria.hpp"

AMateria::AMateria() : _type("unknow"), _xp(0)
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &o)
{
	*this = o;
}

AMateria			&AMateria::operator=(AMateria const &o)
{
	if (this != &o)
	{
		this->_type = o.getType();
		this->_xp = o.getXP();
	}
	return *this;
}

AMateria::~AMateria()
{
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void				AMateria::use(ICharacter &target)
{
	this->_xp += 10;
}