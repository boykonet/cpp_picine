#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string t, std::string n) : _type(t), _name(n)
{
}

Zombie::~Zombie()
{
}

void		Zombie::announce() const
{
	std::cout << "<" << this->_name;
	std::cout << " (" << this->_type << ")> Braiiiiiiiinnnnnsssssss........" << std::endl;
}
