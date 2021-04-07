#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "\e[1;32m" << "Gaaah. Me want smash heads!" << "\e[0m" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "\e[1;31m" << "Aaargh..." << "\e[0m" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &o) : Enemy(o)
{
	std::cout << "\e[1;32m" << "Gaaah. Me want smash heads!" << "\e[0m" << std::endl;
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