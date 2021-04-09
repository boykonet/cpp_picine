#include "Character.hpp"

Character::Character() : _name("bob")
{
	for (int i = 0; i < NUM_MATERIA; i++)
		this->_m[i] = nullptr;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < NUM_MATERIA; i++)
		this->_m[i] = nullptr;
}

Character::Character(Character const &o)
{
	*this = o;
}

Character						&Character::operator=(Character const &o)
{
	AMateria const			*a;

	if (this != &o)
	{
		this->_name = o.getName();
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			if (this->_m[i])
			{
				delete this->_m[i];
				this->_m[i] = nullptr;
			}
		}
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			a = o.getAMateria(i);
			if (a)
				this->_m[i] = a->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < NUM_MATERIA; i++)
	{
		if (this->_m[i])
		{
			delete this->_m[i];
			this->_m[i] = nullptr;
		}
	}
}

std::string const				&Character::getName() const
{
	return this->_name;
}

AMateria const					*Character::getAMateria(int idx) const
{
	if (idx >= 0 && idx < NUM_MATERIA)
		return this->_m[idx];
	return nullptr;
}

void							Character::equip(AMateria *m)
{
	for (int i = 0; i < NUM_MATERIA; i++)
	{
		if (!this->_m[i])
		{
//			std::cout << "\e[1;32m" << "Add item to " << i << " index." << "\e[0m" << std::endl;
			this->_m[i] = m;
			break ;
		}
	}
}

void							Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_m[idx])
		{
//			std::cout << "\e[1;31m" << "Delete item from " << idx << " index." << "\e[0m" << std::endl;
			this->_m[idx] = nullptr;
		}
	}
}

void							Character::use(int idx, ICharacter	&target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_m[idx])
			this->_m[idx]->use(target);
	}
}