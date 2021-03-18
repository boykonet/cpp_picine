#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const a )
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = a;
}

Fixed::Fixed( float const a )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &a )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw = a.getRawBits();
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
	return roundf(this->);
}
