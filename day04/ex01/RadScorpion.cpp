#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

//RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(80, "RadScorpion")
//{
//	std::cout << "* click click click *" << std::endl;
//}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &o) : Enemy(o)
{
	std::cout << "* click click click *" << std::endl;
	*this = o;
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