#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

# define END		"\e[0m"
# define CNSTR		"Constructor called"
# define DESTR		"Destructor called"
# define COPY_CNSTR	"Copy constructor called"
# define ASSIGN		"Assignation operator called"

class 	FragTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &f);
	FragTrap		&operator=(FragTrap const &f);
	int 			rangedAttack(std::string const &target);
	int 			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
	int				vaulthunter_dot_exe(std::string const & target);
	int 			getHitPoints() const;
	int 			getEnergyPoints() const;
	std::string		getName() const;

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