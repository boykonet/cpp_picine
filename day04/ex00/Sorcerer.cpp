#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title \
	<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title \
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &o)
{
	*this = o;
}

Sorcerer				&Sorcerer::operator=(Sorcerer const &o)
{
	if (this != &o)
	{
		this->_name = o.getName();
		this->_title = o.getTitle();
	}
	return *this;
}

std::string 			Sorcerer::getName() const
{
	return this->_name;
}

std::string 			Sorcerer::getTitle() const
{
	return this->_title;
}

std::ostream 			&operator<<(std::ostream &os, Sorcerer const &o)
{
	os << "I am " << o.getName() << ", " << o.getTitle() << ", and I like ponies!";
	return (os);
}