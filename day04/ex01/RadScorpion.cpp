#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "\e[1;32m" << "* click click click *" << "\e[0m" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "\e[1;31m" << "* SPROTCH *" << "\e[0m" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &o) : Enemy(o)
{
	*this = o;
	std::cout << "\e[1;32m" << "* click click click *" << "\e[0m" << std::endl;
}

RadScorpion				&RadScorpion::operator=(RadScorpion const &o)
{
	if (this != &o)
	{
		this->_hp = o.getHP();
		this->_type = o.getType();
	}
	return *this;
}