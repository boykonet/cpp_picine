#include "Pony.hpp"

Pony::Pony() : Victim("Valera")
{
	std::cout << "Igogo. Igogo." << std::endl;
}

Pony::Pony(std::string name) : Victim(name)
{
	std::cout << "Igogo. Igogo." << std::endl;
}

Pony::~Pony()
{
	std::cout << "I don't want to die...aaa..." << std::endl;
}

Pony::Pony(Pony const &o) : Victim(o)
{
	std::cout << "Igogo. Igogo." << std::endl;
	*this = o;
}

Pony					&Pony::operator=(Pony const &o)
{
	if (this != &o)
		this->_name = o.getName();
	return *this;
}

void					Pony::getPolymorphed() const
{
	std::cout << "\e[1;36m" << this->_name << " has been turned into a thoroughbred stallion with a pink tail!" << "\e[0m" << std::endl;
}

std::string 			Pony::getName() const
{
	return this->_name;
}

std::ostream 			&operator<<(std::ostream &os, Pony const &o)
{
	os << "I'm " << o.getName() << " and I am the pony everyone loves!" << std::endl;
	return (os);
}