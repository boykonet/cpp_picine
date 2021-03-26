#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_F		"FragTrap class constructor called"
# define DESTR_F		"FragTrap class destructor called"
# define COPY_CNSTR_F	"FragTrap class copy constructor called"
# define ASSIGN_F		"FragTrap class assignation operator called"

class 	FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &f);
	FragTrap			&operator=(FragTrap const &f);
	int 				rangedAttack(std::string const &target);
	int 				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int					vaulthunter_dot_exe(std::string const & target);
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;

private:
	std::string 		_name;
	int					_hitPoints;
	int					_energyPoints;
	static int const	_maxHitPoints = 100;
	static int const	_maxEnergyPoints = 100;
	static int const	_level = 1;
	static int const	_meleeAttackDamage = 30;
	static int const	_rangedAttackDamage = 20;
	static int const	_armorDamageReduction = 5;
};

#endif