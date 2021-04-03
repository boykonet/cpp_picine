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
	Character(std::string const &name, int ap);
	Character(std::string const &name, int ap, AWeapon *w);
	~Character();
	Character(Character const &o);
	Character				&operator=(Character const &o);
	void					recoverAP();
	void					equip(AWeapon *w);
	void					attack(Enemy *e);
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