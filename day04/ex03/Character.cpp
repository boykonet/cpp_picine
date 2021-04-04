#include "Character.hpp"

Character::Character() : _name("bob")
{
	for (int i = 0; i < 4; i++)
		_m[i] = nullptr;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_m[i] = nullptr;
}

Character::Character(Character const &o)
{
	*this = o;
}

Character						&Character::operator=(Character const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		if (this->_m[0])
			;
	}
	return *this;
}

Character::~Character()
{

}

std::string const				&Character::getName() const
{

}

void							Character::equip(AMateria *m)
{

}

void							Character::unequip(int idx)
{

}

void							Character::use(int idx, ICharacter	&target)
{

}