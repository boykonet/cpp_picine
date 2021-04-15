#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base::Base(Base const &o)
{
	*this = o;
}

Base					&Base::operator=(Base const &o)
{
	if (this != &o)
		;
	return *this;
}

//std::ostream			&operator<<(std::ostream &os, Base const &base)
//{
//	os << "Base";
//	return os;
//}

//std::string 			Base::getName() const
//{
//	std::string			base("Base");
//
//	return base;
//}
