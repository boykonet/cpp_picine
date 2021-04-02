#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

//PlasmaRifle::PlasmaRifle(std::string name, int apcost, int damage) : AWeapon("Plasma Rifle", 5, 21)
//{
//}

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
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}