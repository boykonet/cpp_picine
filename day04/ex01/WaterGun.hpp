#ifndef WATERGUN_HPP
# define WATERGUN_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class 			WaterGun : public AWeapon
{
public:
	WaterGun();
	virtual ~WaterGun();
	WaterGun(WaterGun const &o);
	WaterGun				&operator=(WaterGun const &o);
	void					attack() const;
};

#endif
