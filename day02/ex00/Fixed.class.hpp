#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed				&operator=( Fixed const &rhs );
	Fixed				operator+( Fixed const &rhs ) const;
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
private:
	int					_raw;
	static const int	_lit;
};

std::ostream			&operator<<( std::ostream &o, Fixed const &rhs );

#endif
