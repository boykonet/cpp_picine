#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Alexander"), _title("the Magnificent")
{
	std::cout << this->_name << ", " << this->_title \
	<< ", is born!" << std::endl;
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
	std::cout << this->_name << ", " << this->_title \
	<< ", is born!" << std::endl;
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

void					Sorcerer::polymorph(Victim const &o) const
{
	o.getPolymorphed();
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
	os << "I am " << o.getName() << ", " << o.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}