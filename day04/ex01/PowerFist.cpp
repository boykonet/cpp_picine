#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &o) : AWeapon(o)
{
	*this = o;
}

PowerFist				&PowerFist::operator=(PowerFist const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		this->_apcost = o.getAPCost();
		this->_damage = o.getDamage();
	}
	return *this;
}

void					PowerFist::attack() const
{
	std::cout << "\e[1;35m" << "* pschhh... SBAM! *" << "\e[0m" << std::endl;
}