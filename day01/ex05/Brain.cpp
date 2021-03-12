#include "Brain.hpp"

Brain::Brain()
{
	this->productivity = 100;
	this->creativity = 100;
}

Brain::Brain(int p, int c) : productivity(p), creativity(c)
{
}

Brain::~Brain()
{
}

std::string			Brain::identify()
{
	std::stringstream	ss;
	std::string			addr;
	
	ss << (const void *)this;
	addr = ss.str();
	return ("0x" + addr);
}
