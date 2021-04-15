#include "Data.hpp"

Data::Data()
{
}

Data::~Data()
{
}

Data::Data(Data const &o)
{
	*this = o;
}

Data				&Data::operator=(Data const &o)
{
	if (this != &o)
		;
	return *this;
}

void 				Data::setStr1(std::string const &str1)
{
	this->_str1 = str1;
}

void 				Data::setInt(int num)
{
	this->_num = num;
}

void 				Data::setStr2(std::string const &str2)
{
	this->_str2 = str2;
}

std::string const	&Data::getStr1() const
{
	return this->_str1;
}

int 				Data::getInt() const
{
	return this->_num;
}

std::string const	&Data::getStr2() const
{
	return this->_str2;
}