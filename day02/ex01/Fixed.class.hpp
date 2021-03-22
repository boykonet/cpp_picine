#ifndef FIXED_HPP
# define FIXED_HPP

# define START	"\e[1;31m"
# define END	"\e[0m"

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
public:
	Fixed( void );
	Fixed( int const a );
	Fixed( float const a);
	~Fixed( void );
	Fixed( Fixed const &a );
	Fixed				&operator=( Fixed const &a );
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;
	int					checkMaxMin( long const l ) const;
private:
	int					_raw;
	static const int	_lit = 8;
};

std::ostream 			&operator<<( std::ostream &os, Fixed const &f );

#endif
