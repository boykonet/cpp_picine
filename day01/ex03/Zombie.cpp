#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string t, std::string n) : type(t), name(n)
{
}

Zombie::~Zombie()
{
}

void		Zombie::announce()
{
	std::cout << "<" << this->name;
	std::cout << " (" << this->type << ")> Braiiiiiiiinnnnnsssssss........" << std::endl;
}
