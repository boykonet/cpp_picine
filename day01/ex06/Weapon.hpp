#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string s);
	~Weapon();
	const std::string	*getType();
	void				setType(std::string newString);
private:
	std::string			string;
};

#endif
