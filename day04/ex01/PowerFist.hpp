#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class 			PowerFist : public AWeapon
{
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const &o);
	PowerFist				&operator=(PowerFist const &o);
	void					attack() const;
};

#endif