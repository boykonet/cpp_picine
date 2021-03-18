#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
	this->_b = Brain();
}

Human::~Human()
{
}

Brain const			&Human::getBrain() const
{
	return this->_b;
}

std::string			Human::identify() const
{
	return this->getBrain().identify();
}
