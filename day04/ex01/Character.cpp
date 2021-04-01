#include "Character.hpp"

Character::Character() : _name("Character"), _hp(40)
{
}
Character::Character(std::string const &name) : _name(name), _hp(40)
{
}

Character::~Character()
{
}

Character::Character(Character const &o)
{

}

Character				&Character::operator=(Character const &o)
{

}

void					Character::recoverAP()
{
	this->_hp += 10;
	if (this->_hp > 40)
		this->_hp = 40;
}

void					Character::equip(AWeapon*)
{

}

void					Character::attack(Enemy*)
{

}

std::string				Character::getName() const
{

}