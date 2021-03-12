#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string s) : string(s)
{
}

Weapon::~Weapon()
{
}

const std::string		*Weapon::getType()
{
	return &this->string;
}

void					Weapon::setType(std::string newString)
{
	this->string = newString;
}
