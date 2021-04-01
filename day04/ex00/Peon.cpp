#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string name) : _name(name)
{
}

Peon::~Peon()
{
}

std::string 			Peon::getName() const
{
	return this->_name;
}

std::ostream 			&operator<<(std::ostream &os, Peon const &o)
{
	os << "I'm " << o.getName() << " and I like otters!" << std::endl;
	return (os);
}