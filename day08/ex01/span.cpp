#include "span.hpp"

Span::Span() : _arr(5)
{
	this->_it = this->_arr.begin();
}

Span::Span(unsigned int N) : _arr(N)
{
	this->_it = this->_arr.begin();
}

Span::~Span()
{
}

Span::Span(Span const &o)
{
	*this = o;
}

Span					&Span::operator=(Span const &o)
{
	if (this != &o)
	{
		;
//		this->_arr = o.;
	}
	return *this;
}

void 					Span::addNumber(int n)
{
//	std::cout << this->_arr.capacity() << std::endl;
//	std::cout << std::distance(this->_arr.begin(), this->_it) << std::endl;
	if (this->_it - this->_arr.begin() > this->_arr.capacity())
		throw ErrAddNum();
	this->_arr.at(*this->_it) = n;
	this->_it++;
}

int 					Span::shortestSpan() const
{
	return this->_arr.at(0);
}

int 					Span::longestSpan() const
{
	return this->_arr.at(1);
}

const char 				*Span::ErrAddNum::what() const throw()
{
	return "N is incorrect";
}