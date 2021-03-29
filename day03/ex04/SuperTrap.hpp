#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_SU		"SuperTrap class constructor called"
# define DESTR_SU		"SuperTrap class destructor called"
# define COPY_CNSTR_SU	"SuperTrap class copy constructor called"
# define ASSIGN_SU		"SuperTrap class assignation operator called"

class	SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name);
	~SuperTrap();
	SuperTrap(SuperTrap const &f);
	SuperTrap				&operator=(SuperTrap const &f);
	void					takeDamage(unsigned int amount);
	void 					beRepaired(unsigned int amount);
	int 					getHitPoints() const;
	int 					getEnergyPoints() const;
	std::string				getName() const;
private:
	std::string				_name;
	int						_hitPoints;
	int						_energyPoints;
	static int const		_maxHitPoints = 100;
	static int const		_maxEnergyPoints = 120;
	static int const		_level = 1;
	static int const		_meleeAttackDamage = 60;
	static int const		_rangedAttackDamage = 20;
	static int const		_armorDamageReduction = 5;
};

# endif