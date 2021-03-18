#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" \
		<< std::endl;
	this->_raw = 0;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" \
		<< std::endl;
}

Fixed			&Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignation operator called" \
		<< std::endl;

	this->_raw = rhs.getRawBits();

	return *this;
}

Fixed			Fixed::operator+( Fixed const &rhs ) const
{
	std::cout << "Assignation operator called" \
		<< std::endl;
	
	return Fixed( this->_raw + rhs.getRawBits() );
}

int			Fixed::getRawBits( void ) const
{
	return this->_raw;
}

void		Fixed::setRawBits( int const raw )
{
	this->_raw = raw;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs )
{
	o << rhs.getRawBits();
	return (o);
}
