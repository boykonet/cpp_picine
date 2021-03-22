#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("Al")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	std::cout << DEF_CNSTR << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	std::cout << CNSTR << std::endl;
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << COPY_CNSTR << std::endl;
	*this = f;
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

FragTrap		&FragTrap::operator=(FragTrap const &f)
{
	if (this != &f)
	{
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_name = f.getName();
	}
	return *this;
}

int			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->getName() << "attacks " \
	<< target << "at range, causing " << this->getRangedAttackDamage() \
	<< "points of damage!" << std::endl;
	this->_hitPoints += this->_rangedAttackDamage / 4;
	return this->_rangedAttackDamage;
}

int 		FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->getName() << "attacks " \
	<< target << "at range, causing " << this->getMeleeAttackDamage() \
	<< "points of damage!" << std::endl;
	this->_hitPoints += this->_meleeAttackDamage / 4;
	return this->_meleeAttackDamage;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void 			FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}