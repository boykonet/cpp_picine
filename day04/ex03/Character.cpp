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
		{
			for (int i = 0; this->_m[i]; i++)
				delete this->_m[i];
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; this->_m[i]; i++)
		delete this->_m[i];
}

std::string const				&Character::getName() const
{
	return this->_name;
}

void							Character::equip(AMateria *m)
{
	for ()
}

void							Character::unequip(int idx)
{

}

void							Character::use(int idx, ICharacter	&target)
{
	AMateria::use(target);
}