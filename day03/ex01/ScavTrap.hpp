#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_D_S		"ScavTrap class default constructor called"
# define CNSTR_S		"ScavTrap class constructor called"
# define DESTR_S		"ScavTrap class destructor called"
# define COPY_CNSTR_S	"ScavTrap class copy constructor called"
# define ASSIGN_S		"ScavTrap class assignation operator called"

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &f);
	ScavTrap			&operator=(ScavTrap const &f);
	unsigned int 		rangedAttack(std::string const &target);
	unsigned int 		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int					challengeNewcomer();
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;
	std::string 		getType() const;
private:
	std::string			_name;
	std::string 		_type;
	int					_hitPoints;
	int					_energyPoints;
	unsigned int		_maxHitPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;
};

#endif