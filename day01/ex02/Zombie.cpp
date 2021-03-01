#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void		announce()
{
	std::cout << "<" << this->name;
	std::cout << " (" << this->type << ")> Braiiiiiiiinnnnnsssssss........" << std::endl;
}

Zombie			*Zombie::newZombie(std::string name)
{
	Zombie		*zombie = new Zombie("zombie", "Alisa");

	zombie.announce();
	delete zombie;
}

