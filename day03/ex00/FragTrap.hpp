#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define START1		"\e[1;36m"
# define START2		"\e[1;31m"
# define START3		"\e[1;33m"
# define END		"\e[0m"
# define CNSTR		"Constructor called"
# define DESTR		"Destructor called"
# define COPY_CNSTR	"Copy constructor called"
# define ASSIGN		"Assignation operator called"

# include <iostream>
# include <string>

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
	void			vaulthunter_dot_exe(std::string const & target);
	int 			getHitPoints(void) const;
	int 			getEnergyPoints(void) const;
	int 			getMeleeAttackDamage() const;
	int 			getRangedAttackDamage() const;
	int 			getArmorDamageReduction() const;
	std::string		getName(void) const;

private:
	std::string 		_name;
	unsigned int 		_hitPoints;
	unsigned int 		_energyPoints;
	static int const	_maxHitPoints = 100;
	static int const 	_maxEnergyPoints = 100;
	static int const 	_level = 1;
	static int const	_meleeAttackDamage = 30;
	static int const 	_rangedAttackDamage = 20;
	static int const 	_armorDamageReduction = 5;
};

#endif