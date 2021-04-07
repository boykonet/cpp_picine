#include "WaterGun.hpp"

WaterGun::WaterGun() : AWeapon("WaterGun", 4, 10)
{
}

WaterGun::~WaterGun()
{
}

WaterGun::WaterGun(WaterGun const &o) : AWeapon(o)
{
	*this = o;
}

WaterGun				&WaterGun::operator=(WaterGun const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		this->_apcost = o.getAPCost();
		this->_damage = o.getDamage();
	}
	return *this;
}

void					WaterGun::attack() const
{
	std::cout << "\e[1;36m" << "* pshhhhh pshhhhh pshhhhh *" << "\e[0m" << std::endl;
}
