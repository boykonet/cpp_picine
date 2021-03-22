#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const a )
{
	long	num;
	int 	r;

	std::cout << "Int constructor called" << std::endl;
	num = static_cast<long>(a) * static_cast<long>(1 << this->_lit);
	r = this->checkMaxMin(num);
	if (r != 0)
		num = static_cast<long>(r) * static_cast<long>(1 << this->_lit);
	this->setRawBits(num);
}

Fixed::Fixed( float const a )
{
	long	num;
	int 	r;

	std::cout << "Float constructor called" << std::endl;
	num = static_cast<float>(a) * static_cast<float>(1 << this->_lit);
	r = this->checkMaxMin(num);
	if (r != 0)
		num = static_cast<float>(r) * static_cast<float>(1 << this->_lit);
	this->setRawBits(num);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &a )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed			&Fixed::operator=( Fixed const &a )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
		this->_raw = a.getRawBits();
	return *this;
}

int			Fixed::getRawBits( void ) const
{
	return this->_raw;
}

void		Fixed::setRawBits( int const raw )
{
	this->_raw = raw;
}

int 		Fixed::toInt( void ) const
{
	return roundf(this->toFloat());
}

float		Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_raw) / static_cast<float>(1 << this->_lit));
}

int			Fixed::checkMaxMin( long const l ) const
{
	if (l > std::numeric_limits<int>::max())
	{
		std::cout << START << "Overflow: num > " << std::numeric_limits<int>::max() << END << std::endl;
		return (1);
	}
	else if (l < std::numeric_limits<int>::min())
	{
		std::cout << START << "Overflow: num < " << std::numeric_limits<int>::min() << END << std::endl;
		return (-1);
	}
	return (0);
}

std::ostream 	&operator<<( std::ostream &os, Fixed const &f )
{
	os << f.toFloat();
	return (os);
}
