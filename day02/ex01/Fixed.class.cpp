#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const a )
{
	long 	num;

	std::cout << "Int constructor called" << std::endl;
	num = static_cast<long>(a) * static_cast<long>(1 << this->_lit);
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "Overflow" << std::endl;
	this->setRawBits(num);
}

Fixed::Fixed( float const a )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(static_cast<float>(a) * static_cast<float>(1 << this->_lit));
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
	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream 	&operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}
