#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define NUM_MATERIA	4
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class			AMateria;

class			Character : public ICharacter
{
private:
	Character();
	std::string 					_name;
	AMateria						*_m[NUM_MATERIA];
public:
	Character(std::string const &name);
	Character(Character const &o);
	Character						&operator=(Character const &o);
	~Character();
	std::string const				&getName() const;
	AMateria const					*getAMateria(int idx) const;
	void							equip(AMateria *m);
	void							unequip(int idx);
	void							use(int idx, ICharacter	&target);
};

#endif