#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class		AWeapon
{
public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const &o);
	AWeapon					&operator=(AWeapon const &o);
	std::string				getName() const;
	int						getAPCost() const;
	int						getDamage() const;
	virtual void			attack() const = 0;

private:
	AWeapon();

protected:
	std::string 			_name;
	int 					_apcost;
	int 					_damage;
};

#endif