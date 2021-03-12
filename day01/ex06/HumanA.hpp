#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
public:
	HumanA(std::string n, Weapon &w);
	~HumanA();
	void			attack();
private:
	std::string		name;
	Weapon			&weap;
};

# endif
