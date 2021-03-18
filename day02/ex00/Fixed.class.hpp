#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const &a );
	Fixed				&operator=( Fixed const &a );
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	void 				swap( Fixed &a );
private:
	int					_raw;
	static const int	_lit = 8;
};

#endif
