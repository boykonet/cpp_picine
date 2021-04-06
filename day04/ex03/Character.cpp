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
			this->_m[i] = o._m[i];
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