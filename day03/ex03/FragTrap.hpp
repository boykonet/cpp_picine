#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define RED_OPEN		"\e[1;31m"
# define GREEN_OPEN		"\e[1;32m"
# define YELLOW_OPEN	"\e[1;33m"
# define CLOSE			"\e[0m"
# define CNSTR_D_F		"FragTrap class default constructor called"
# define CNSTR_F		"FragTrap class constructor called"
# define DESTR_F		"FragTrap class destructor called"
# define COPY_CNSTR_F	"FragTrap class copy constructor called"
# define ASSIGN_F		"FragTrap class assignation operator called"

class 	FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &f);
	FragTrap			&operator=(FragTrap const &f);
	unsigned int 		rangedAttack(std::string const &target);
	unsigned int 		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	int					vaulthunter_dot_exe(std::string const &target);
	int 				getHitPoints() const;
	int 				getEnergyPoints() const;
	std::string			getName() const;
	std::string 		getType() const;

private:
	std::string 		_name;
	std::string 		_type;
};

#endif