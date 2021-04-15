#include "A.hpp"

A::A() : Base()
{
}

A::~A()
{
}

A::A(A const &o) : Base()
{
	*this = o;
}

A						&A::operator=(A const &o)
{
	if (this != &o)
		;
	return *this;
}

//Base					*A::copy()
//{
//	return new A;
//}

//std::ostream			&operator<<(std::ostream &os, A const &a)
//{
//	os << "A";
//	return os;
//}

std::string 			A::getName() const
{
	std::string			a("A");

	return a;
}