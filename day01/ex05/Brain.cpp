#include "Brain.hpp"

Brain::Brain()
{
	this->_productivity = 100;
	this->_creativity = 100;
}

Brain::Brain(int p, int c) : _productivity(p), _creativity(c)
{
}

Brain::~Brain()
{
}

std::string			Brain::identify() const
{
	std::stringstream	ss;
	
//	ss << "0x" << std::uppercase << std::hex << (const unsigned long int)this;
	ss << (const void *)this;
	return (ss.str());
}
