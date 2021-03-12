#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n)
{
}

HumanB::~HumanB()
{
}

void		HumanB::attack()
{
	std::cout << this->name << " attack with his " << *this->weap->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &w)
{
	this->weap = &w;
}
