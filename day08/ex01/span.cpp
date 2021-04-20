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
	this->_arr.clear();
}

Span::Span(Span const &o)
{
	*this = o;
}

Span					&Span::operator=(Span const &o)
{
	if (this != &o)
	{
		this->_arr.clear();
		this->_arr = o._arr;
		this->_it = o._it;
	}
	return *this;
}

void 					Span::addNumber(int n)
{
	if (std::distance(this->_arr.begin(), this->_it) >= this->_arr.capacity())
		throw Span::ErrAddNum();
	this->_arr.at(std::distance(this->_arr.begin(), this->_it)) = n;
	this->_it++;
}

int 					Span::shortestSpan() const
{
	if (this->_arr.size() < 2)
		throw Span::ErrCountNum();

	std::vector<int>					copy(this->_arr);
	std::vector<int>::const_iterator	min_diff;

	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), copy.begin());
	min_diff = std::min_element(copy.begin() + 1, copy.end());
	return *min_diff;
}

int 					Span::longestSpan() const
{
	if (this->_arr.size() < 2)
		throw Span::ErrCountNum();
	return (*std::max_element(this->_arr.begin(), this->_arr.end())
	- *std::min_element(this->_arr.begin(), this->_arr.end()));
}

void 					Span::generate(std::vector<int>::iterator itb, std::vector<int>::iterator ite)
{
	int 				count = std::distance(itb, ite);

	std::cout << "size = " << this->_it - this->_arr.begin() << std::endl;
	std::cout << "distance = " << count << std::endl;
	std::cout << "capacity = " << this->_arr.capacity() << std::endl;
	if (count + this->_it - this->_arr.begin() > this->_arr.capacity())
		throw Span::ErrAddNum();

	for (int i = 0; i < count; i++)
	{
		this->_arr.at(*this->_it + i) = *itb;
		++itb;
		++this->_it;
	}
}


const char 				*Span::ErrAddNum::what() const throw()
{
	return "Param is incorrect";
}

const char 				*Span::ErrCountNum::what() const throw()
{
	return "Count num in array < 2";
}