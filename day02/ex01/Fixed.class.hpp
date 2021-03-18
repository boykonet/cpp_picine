#ifndef FIXED_HPP
# define FIXED_HPP

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
private:
	int					_raw;
	static const int	_lit = 8;
};

#endif
