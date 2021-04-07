#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &o) : AWeapon(o)
{
	*this = o;
}

PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		this->_apcost = o.getAPCost();
		this->_damage = o.getDamage();
	}
	return *this;
}

void					PlasmaRifle::attack() const
{
	std::cout << "\e[1;34m" << "* piouuu piouuu piouuu *" << "\e[0m" << std::endl;
}