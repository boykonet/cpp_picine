#ifndef SCAVTRAP_HPP
# define SSCAVTRAP_HPP

# include <iostream>
# include <string>

# define END		"\e[0m"
# define CNSTR		"Constructor called"
# define DESTR		"Destructor called"
# define COPY_CNSTR	"Copy constructor called"
# define ASSIGN		"Assignation operator called"

class ScavTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &f);
	ScavTrap			&operator=(ScavTrap const &f);
	int 				rangedAttack(std::string const &target);
	int 				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int					challengeNewcomer(std::string const & target);
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;
private:
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	static int const	_maxHitPoints = 100;
	static int const	_maxEnergyPoints = 50;
	static int const	_level = 1;
	static int const	_meleeAttackDamage = 20;
	static int const	_rangedAttackDamage = 15;
	static int const	_armorDamageReduction = 3;
};

#endif