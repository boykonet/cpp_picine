#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class 			PowerFist : public AWeapon
{
public:
	PowerFist(std::string name, int apcost, int damage);
	~PowerFist();
	PowerFist(PowerFist const &o);
	PowerFist				&operator=(PowerFist const &o);
	void					attack() const;

private:
	PowerFist();
};

#endif