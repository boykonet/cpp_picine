#include "Peon.hpp"

Peon::Peon() : Victim("Valera")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &o) : Victim(o)
{
	*this = o;
}

Peon					&Peon::operator=(Peon const &o)
{
	if (this != &o)
		this->_name = o.getName();
	return *this;
}

void					Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
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