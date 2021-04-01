#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _apcost(), _damage()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &o)
{
	*this = o;
}

AWeapon					&AWeapon::operator=(AWeapon const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		this->_apcost = o.getAPCost();
		this->_damage = o.getDamage();
	}
	return *this;
}

std::string				AWeapon::getName() const
{
	return this->_name;
}

int						AWeapon::getAPCost() const
{
	return this->_apcost;
}

int						AWeapon::getDamage() const
{
	return this->_damage;
}