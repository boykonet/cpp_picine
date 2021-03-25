#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << CNSTR << std::endl;
	std::cout << "[ Coffee? Black... like my soul. ]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
}

ScavTrap::~ScavTrap()
{
	std::cout << DESTR << std::endl;
	std::cout << "[ Crack shot! ]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f)
{
	std::cout << COPY_CNSTR << std::endl;
	std::cout << "[ Hey, best friend! ]" << std::endl;
	*this = f;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &f)
{
	std::cout << ASSIGN << std::endl;
	std::cout << "[ Guess who? ]" << std::endl;
	if (this != &f)
	{
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_name = f.getName();
	}
	return *this;
}

int 			ScavTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 			ScavTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string 	ScavTrap::getName() const
{
	return this->_name;
}

int				ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[1;36m" << "FR4G-TP " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << FragTrap::_rangedAttackDamage \
	<< " points of damage!" << END << std::endl;
	std::cout << "[ Sniped! ]" << std::endl;
	return FragTrap::_rangedAttackDamage;
}

int 			ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "\e[1;36m" << "FR4G-TP " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << FragTrap::_meleeAttackDamage \
	<< " points of damage!" << END << std::endl;
	std::cout << "[ Hit me, baby! ]" << std::endl;
	return FragTrap::_meleeAttackDamage;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - FragTrap::_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "[ Armor soak increased! ]" << std::endl;
	std::cout << "\e[1;31m" << this->_name << " lost " << amount - FragTrap::_armorDamageReduction << " HP!"<< END << std::endl;
}

void 			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "\e[1;32m" << this->_name << " got " << amount << " energy points! Great!" << END << std::endl;
	this->_energyPoints += amount;
	std::cout << "[ Why do I feel radioactive!? ]" << std::endl;
	if (this->_energyPoints > FragTrap::_maxEnergyPoints)
		this->_energyPoints = FragTrap::_maxEnergyPoints;
}

int 			ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string 	attacks[5] = { "kick", "baton", "chair", "typewriter", "palm" }; // нога, дубина, стул, печатная машинка, ладонь
	int				energy[5] = { 5, 10, 15, 20, 25 };
	int 			i;

	i = 0;
	if (this->_energyPoints < energy[4])
		std::cout << "\e[1;36m" << "Khm... You don't have energy, sorryyyyyyyyyy:(" << END << std::endl;
	else
	{
		i = std::rand()%5;
		std::cout << "\e[1;32m" << this->_name << " attacks " << target << " a " << attacks[i] << "! Great! Keep this up!" << END << std::endl;
		this->_energyPoints -= energy[4];
		std::cout << "\e[1;32m" << this->_name << " has " << this->_energyPoints << " energy points!" << END << std::endl;
	}
	return energy[i];
}