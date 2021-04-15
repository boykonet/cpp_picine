#include "C.hpp"

C::C() : Base()
{
}

C::~C()
{
}

C::C(C const &o) : Base()
{
	*this = o;
}

C						&C::operator=(C const &o)
{
	if (this != &o)
		;
	return *this;
}

//std::ostream			&operator<<(std::ostream &os, C const &c)
//{
//	os << "C";
//	return os;
//}

std::string 			C::getName() const
{
	std::string			c("C");

	return c;
}