#include "Character.hpp"

Character::Character() : _name("Character"), _ap(40), _w(nullptr)
{
}

Character::Character(std::string const &name) : _name(name), _ap(40), _w(nullptr)
{
}

Character::Character(std::string const &name, int ap) : _name(name), _ap(ap), _w(nullptr)
{
}

Character::Character(std::string const &name, int ap, AWeapon *w) : _name(name), _ap(ap), _w(w)
{
}

Character::~Character()
{
	this->_w = nullptr;
}

Character::Character(Character const &o)
{
	*this = o;
}

Character				&Character::operator=(Character const &o)
{
	if (this != &o)
	{
		this->_ap = o.getAP();
		this->_name = o.getName();
		this->_w = o.getAWeapon();
	}
	return *this;
}

void					Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void					Character::equip(AWeapon *w)
{
	this->_w = w;
}

void					Character::attack(Enemy *e)
{
	if (e)
	{
		if (this->_w)
		{
			if (this->_ap >= this->_w->getAPCost())
			{
				std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_w->getName() << std::endl;
				this->_w->attack();
				this->_ap -= this->_w->getAPCost();
				e->takeDamage(this->_w->getDamage());
				if (e->getHP() == 0)
				{
					delete e;
					e = nullptr;
				}
			}
		}
	}
}

std::string const		&Character::getName() const
{
	return this->_name;
}

int 					Character::getAP() const
{
	return this->_ap;
}

AWeapon					*Character::getAWeapon() const
{
	return this->_w;
}

std::ostream			&operator<<(std::ostream &os, Character const &o)
{
	if (o.getAWeapon())
		os << o.getName() << " has " << o.getAP() << " AP and wields a " << o.getAWeapon()->getName() << std::endl;
	else
		os << o.getName() << " has " << o.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}