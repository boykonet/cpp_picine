#include "Joker.hpp"

Joker::Joker() : Enemy(100, "Joker")
{
	std::cout << "\e[1;32m" << "And I thought my jokes were bad." << "\e[0m" << std::endl;
}

Joker::~Joker()
{
	std::cout << "\e[1;31m" << "I believe whatever doesn`t kill you, simply makes you… stranger." << "\e[0m" << std::endl;
}

Joker::Joker(Joker const &o) : Enemy(o)
{
	*this = o;
	std::cout << "\e[1;32m" << "And I thought my jokes were bad." << "\e[0m" << std::endl;
}

Joker					&Joker::operator=(Joker const &o)
{
	if (this != &o)
	{
		this->_hp = o.getHP();
		this->_type = o.getType();
	}
	return *this;
}