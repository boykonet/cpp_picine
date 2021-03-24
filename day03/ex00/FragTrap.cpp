#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << CNSTR << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << DESTR << std::endl;
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << COPY_CNSTR << std::endl;
	*this = f;
}

FragTrap		&FragTrap::operator=(FragTrap const &f)
{
	std::cout << ASSIGN << std::endl;
	if (this != &f)
	{
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_name = f.getName();
	}
	return *this;
}

int 			FragTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 			FragTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string 	FragTrap::getName() const
{
	return this->_name;
}

int			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[1;36m" << "FR4G-TP " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << FragTrap::_rangedAttackDamage \
	<< " points of damage!" << END << std::endl;
	return FragTrap::_rangedAttackDamage;
}

int 		FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "\e[1;36m" << "FR4G-TP " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << FragTrap::_meleeAttackDamage \
	<< " points of damage!" << END << std::endl;
	std::cout << "Success! My spell to make you want to hang out with me worked!" << std::endl;
	return FragTrap::_meleeAttackDamage;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - FragTrap::_armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "\e[1;31m" << this->_name << " lost " << amount - FragTrap::_armorDamageReduction << " HP!"<< END << std::endl;
}

void 			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "\e[1;32m" << this->_name << " got " << amount << " energy points! Great!" << END << std::endl;
	this->_energyPoints += amount;
	if (this->_energyPoints > FragTrap::_maxEnergyPoints)
		this->_energyPoints = FragTrap::_maxEnergyPoints;
}

int 			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string 	attacks[5] = { "kick", "baton", "chair", "typewriter", "palm" }; // нога, дубина, стул, печатная машинка, ладонь
	int 			energy = 25;

	if (this->_energyPoints < energy)
	{
		std::cout << "\e[1;36m" << "Khm... You don't have energy, sorryyyyyyyyyy:(" << END << std::endl;
	}
	else
	{
		std::cout << "\e[1;32m" << this->_name << " attacks " << target << " a " << attacks[std::rand()%5] << "! Great! Keep this up!" << END << std::endl;
		this->_energyPoints -= energy;
		std::cout << "\e[1;32m" << this->_name << " has " << this->_energyPoints << " energy points!" << END << std::endl;
	}
	return energy - 10;
}