#include "B.hpp"

B::B() : Base()
{
}

B::~B()
{
}

B::B(B const &o) : Base()
{
	*this = o;
}

B						&B::operator=(B const &o)
{
	if (this != &o)
		;
	return *this;
}

std::string				B::getName() const
{
	std::string			b("B");

	return b;
}

//std::ostream			&operator<<(std::ostream &os, B const &b)
//{
//	os << "B";
//	return os;
//}