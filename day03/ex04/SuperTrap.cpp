#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	std::cout << CNSTR_D_SU << std::endl;
	this->_type = "SUPER-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 120;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name), _name(name)
{
	std::cout << CNSTR_SU << std::endl;
	this->_type = "SUPER-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 120;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_type << " - [ Yahooooo! ]" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << DESTR_SU << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ This was a reeeally bad idea! ]" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &f)
{
	std::cout << COPY_CNSTR_SU << std::endl;
	*this = f;
}

SuperTrap			&SuperTrap::operator=(SuperTrap const &f)
{
	std::cout << ASSIGN_SU << std::endl;
	if (this != &f)
	{
		this->_name = f.getName();
		this->_type = f.getType();
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_maxHitPoints = 100;
		this->_maxEnergyPoints = 120;
		this->_level = 1;
		this->_meleeAttackDamage = 60;
		this->_rangedAttackDamage = 20;
		this->_armorDamageReduction = 5;
	}
	return *this;
}

unsigned int 		SuperTrap::rangedAttack(std::string const &target)
{
	return FragTrap::rangedAttack(target);
}

unsigned int 		SuperTrap::meleeAttack(std::string const & target)
{
	return NinjaTrap::meleeAttack(target);
}

void				SuperTrap::takeDamage(unsigned int amount)
{
	long 			num;
	long 			num2;

	num = this->_hitPoints;
	num -= amount - this->_armorDamageReduction;
	if (num < std::numeric_limits<int>::min())
		std::cout << RED_OPEN << "Error: overflow: INT_MIN" << CLOSE << std::endl;
	else
	{
		num2 = amount + this->_armorDamageReduction;
		if (num2 > this->_hitPoints)
			num2 = this->_hitPoints;
		else
			num2 = amount - this->_armorDamageReduction;
		this->_hitPoints -= static_cast<int>(amount) - static_cast<int>(this->_armorDamageReduction);
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << RED_OPEN << this->_type << " " << this->_name << " lost " << num2 << " HP!" << CLOSE << std::endl;
		std::cout << this->_type << " " << this->_name << " - [ I'll stop talking when I'm dead! ]" << std::endl;
	}
}

void 				SuperTrap::beRepaired(unsigned int amount)
{
	long 			num;
	unsigned int 	num2;

	num = this->_energyPoints;
	num += amount;
	if (num > std::numeric_limits<int>::max())
		std::cout << RED_OPEN << "Error: overflow: INT_MAX" << CLOSE << std::endl;
	else
	{
		num2 = static_cast<int>(this->_maxEnergyPoints) - this->_energyPoints;
		this->_energyPoints += static_cast<int>(amount);
		if (this->_energyPoints > static_cast<int>(this->_maxEnergyPoints))
			this->_energyPoints = static_cast<int>(this->_maxEnergyPoints);
		if (num2 > amount)
			num2 = amount;
		std::cout << GREEN_OPEN << this->_type << " " << this->_name << " got " << num2 << " EP! Great!" << CLOSE << std::endl;
		std::cout << this->_type << " " << this->_name << " - [ Don't forget me! ]" << std::endl;
	}
}

int 				SuperTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 				SuperTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string			SuperTrap::getName() const
{
	return this->_name;
}

std::string			SuperTrap::getType() const
{
	return this->_type;
}