#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class			Character
{
public:
	Character(std::string const &name);
	virtual ~Character();
	Character(Character const &o);
	Character				&operator=(Character const &o);
	void					recoverAP();
	void					equip(AWeapon*);
	void					attack(Enemy*);
	std::string const		&getName() const;
	int 					getAP() const;
	AWeapon					*getAWeapon() const;

private:
	Character();
	std::string 			_name;
	int 					_ap;
	AWeapon					*_w;
};

std::ostream			&operator<<(std::ostream &os, Character const &o);

#endif