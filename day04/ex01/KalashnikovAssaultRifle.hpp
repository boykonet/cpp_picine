#ifndef KALASHNIKOVASSAULTRIFLE_HPP
# define KALASHNIKOVASSAULTRIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class 			KalashnikovAssaultRifle : public AWeapon
{
public:
	KalashnikovAssaultRifle();
	virtual ~KalashnikovAssaultRifle();
	KalashnikovAssaultRifle(KalashnikovAssaultRifle const &o);
	KalashnikovAssaultRifle		&operator=(KalashnikovAssaultRifle const &o);
	void						attack() const;
};

#endif