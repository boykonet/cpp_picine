#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class 			PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
//	PlasmaRifle(std::string name, int apcost, int damage);
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &o);
	PlasmaRifle				&operator=(PlasmaRifle const &o);
	void					attack() const;
};

#endif