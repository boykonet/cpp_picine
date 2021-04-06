#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class			Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &o);
	Cure				&operator=(Cure const &o);
	~Cure();
	AMateria			*clone() const;
	void				use(ICharacter &target);
};

#endif