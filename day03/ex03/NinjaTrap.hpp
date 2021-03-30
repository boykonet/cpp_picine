#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_D_N		"NinjaTrap class default constructor called"
# define CNSTR_N		"NinjaTrap class constructor called"
# define DESTR_N		"NinjaTrap class destructor called"
# define COPY_CNSTR_N	"NinjaTrap class copy constructor called"
# define ASSIGN_N		"NinjaTrap class assignation operator called"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const &f);
	NinjaTrap			&operator=(NinjaTrap const &f);
	unsigned int 		rangedAttack(std::string const &target);
	unsigned int 		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	unsigned int		ninjaShoebox(ClapTrap const &f);
	unsigned int		ninjaShoebox(FragTrap const &f);
	unsigned int		ninjaShoebox(ScavTrap const &f);
	unsigned int		ninjaShoebox(NinjaTrap const &f);
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;
	std::string 		getType() const;
private:
	std::string			_name;
	std::string 		_type;

};

#endif