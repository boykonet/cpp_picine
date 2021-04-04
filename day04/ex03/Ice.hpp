#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class			Ice : public AMateria
{
	Ice();
	Ice(std::string const &type);
	Ice(Ice const &o);
	Ice					&operator=(Ice const &o);
	~Ice();
	AMateria			*clone() const;
	void				use(ICharacter &target);
};

#endif