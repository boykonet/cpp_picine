#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class			Cure : public AMateria
{
public:
	Cure();
	Cure(std::string const &type);
	Cure(Cure const &o);
	Cure				&operator=(Cure const &o);
	~Cure();
	AMateria			*clone() const;
	void				use(ICharacter &target);
};

#endif