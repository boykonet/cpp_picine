#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_C		"ClapTrap class constructor called"
# define DESTR_C		"ClapTrap class destructor called"
# define COPY_CNSTR_C	"ClapTrap class copy constructor called"
# define ASSIGN_C		"ClapTrap class assignation operator called"

class	ClapTrap
{
public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const &f);
	ClapTrap				&operator=(ClapTrap const &f);
	int 					rangedAttack(std::string const &target);
	int 					meleeAttack(std::string const & target);
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
	static int const		_maxEnergyPoints = 100;
	static int const		_level = 1;
	static int const		_meleeAttackDamage = 30;
	static int const		_rangedAttackDamage = 25;
	static int const		_armorDamageReduction = 10;
};

# endif