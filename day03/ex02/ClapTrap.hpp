#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_D_C		"ClapTrap class default constructor called"
# define CNSTR_C		"ClapTrap class constructor called"
# define DESTR_C		"ClapTrap class destructor called"
# define COPY_CNSTR_C	"ClapTrap class copy constructor called"
# define ASSIGN_C		"ClapTrap class assignation operator called"

class	ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const &f);
	ClapTrap				&operator=(ClapTrap const &f);
	virtual unsigned int 	rangedAttack(std::string const &target);
	virtual unsigned int 	meleeAttack(std::string const & target);
	virtual void			takeDamage(unsigned int amount);
	virtual void 			beRepaired(unsigned int amount);
	virtual int 			getHitPoints() const;
	virtual int 			getEnergyPoints() const;
	virtual std::string		getName() const;
	virtual std::string 	getType() const;
protected:
	std::string				_name;
	std::string 			_type;
	int						_hitPoints;
	int						_energyPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	unsigned int			_armorDamageReduction;
};

# endif