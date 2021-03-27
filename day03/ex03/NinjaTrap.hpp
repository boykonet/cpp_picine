#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_N		"NinjaTrap class constructor called"
# define DESTR_N		"NinjaTrap class destructor called"
# define COPY_CNSTR_N	"NinjaTrap class copy constructor called"
# define ASSIGN_N		"NinjaTrap class assignation operator called"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const &f);
	NinjaTrap			&operator=(NinjaTrap const &f);
	int 				rangedAttack(std::string const &target);
	int 				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int					ninjaShoebox();
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;
private:
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	static int const	_maxHitPoints = 60;
	static int const	_maxEnergyPoints = 120;
	static int const	_level = 1;
	static int const	_meleeAttackDamage = 60;
	static int const	_rangedAttackDamage = 5;
	static int const	_armorDamageReduction = 0;
};

#endif