#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weap(w)
{
}

HumanA::~HumanA()
{
}

void		HumanA::attack()
{
	std::cout << this->name << " attack with his " << *this->weap.getType() << std::endl;
}
