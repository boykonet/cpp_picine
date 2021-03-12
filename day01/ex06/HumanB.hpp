#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
public:
	HumanB(std::string n);
	~HumanB();
	void			attack();
	void			setWeapon(Weapon &w);
private:
	std::string		name;
	Weapon			*weap;
};

#endif
