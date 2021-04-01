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
	std::string				getName() const;

private:
	Character();
	std::string 			_name;
	int 					_hp;
	AWeapon					*_w;
};

#endif