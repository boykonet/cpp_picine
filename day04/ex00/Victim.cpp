#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name \
	<< " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name \
	<< " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &o)
{
	*this = o;
}

Victim				&Victim::operator=(Victim const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
	}
	return *this;
}

std::string 		Victim::getName() const
{
	return this->_name;
}