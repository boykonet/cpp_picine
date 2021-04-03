#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &o) : Enemy(o)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = o;
}

SuperMutant				&SuperMutant::operator=(SuperMutant const &o)
{
	if (this != &o)
	{
		this->_hp = o.getHP();
		this->_type = o.getType();
	}
	return *this;
}

void					SuperMutant::takeDamage(int damage)
{
	if (damage - 3 > 0)
		Enemy::takeDamage(damage - 3);
}