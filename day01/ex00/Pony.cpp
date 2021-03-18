#include "Pony.hpp"

Pony::Pony(std::string n, std::string b, std::string y) : _name(n), _breed(b), _yearsOld(y)
{
}

Pony::~Pony()
{
}

const std::string		&Pony::getName() const
{
	return this->_name;
}

const std::string		&Pony::getBreed() const
{
	return this->_breed;
}

const std::string		&Pony::getYearsOld() const
{
	return this->_yearsOld;
}
