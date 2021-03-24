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

int 			FragTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int 			FragTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int 			FragTrap::getMeleeAttackDamage(void) const
{
	return this->_meleeAttackDamage;
}

int 			FragTrap::getRangedAttackDamage(void) const
{
	return this->_rangedAttackDamage;
}

int 			FragTrap::getArmorDamageReduction(void) const
{
	return this->_armorDamageReduction;
}

std::string 	FragTrap::getName(void) const
{
	return this->_name;
}

int			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << START1 << "FR4G-TP " << this->getName() << " attacks " \
	<< target << " at range, causing " << this->getRangedAttackDamage() \
	<< " points of damage!" << END << std::endl;
	return this->getRangedAttackDamage();
}

int 		FragTrap::meleeAttack(const std::string &target)
{
	std::cout << START1 << "FR4G-TP " << this->_name << " attacks " \
	<< target << " at range, causing " << this->getMeleeAttackDamage() \
	<< " points of damage!" << END << std::endl;
	return this->getMeleeAttackDamage();
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << START2 << this->_name << " lost " << amount << " points!"<< END << std::endl;
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void 			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << START3 << this->_name << " gets " << amount << " points! Great!" << END << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > FragTrap::_maxHitPoints)
		this->_hitPoints = 100;
}