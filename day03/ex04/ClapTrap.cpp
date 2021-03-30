#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << CNSTR_D_C << std::endl;
	this->_type = "CL4P-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 50;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << CNSTR_C << std::endl;
	this->_type = "CL4P-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 50;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_type << " - [ Let's get this party started! ]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << DESTR_C << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ I'm flying! I'm really flying! ]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &f)
{
	std::cout << COPY_CNSTR_C << std::endl;
	*this = f;
}

ClapTrap			&ClapTrap::operator=(ClapTrap const &f)
{
	std::cout << ASSIGN_C << std::endl;
	if (this != &f)
	{
		this->_name = f.getName();
		this->_type = f.getType();
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_maxHitPoints = 100;
		this->_maxEnergyPoints = 100;
		this->_level = 1;
		this->_meleeAttackDamage = 50;
		this->_rangedAttackDamage = 20;
		this->_armorDamageReduction = 5;
	}
	return *this;
}

unsigned int 		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "\e[1;36m" << this->_type << " " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << this->_rangedAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ Is it dead? Can, can I open my eyes now? ]" << std::endl;
	return this->_rangedAttackDamage;
}

unsigned int 		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "\e[1;36m" << this->_type << " " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << this->_meleeAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ I have gaskets tougher than you! ]" << std::endl;
	return this->_meleeAttackDamage;
}

void				ClapTrap::takeDamage(unsigned int amount)
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
		std::cout << this->_type << " " << this->_name << " - [ I can't feel my fingers! Gah! I don't have any fingers! ]" << std::endl;
	}
}

void 				ClapTrap::beRepaired(unsigned int amount)
{
	long 			num;
	unsigned int 	num2;

	num = this->_energyPoints;
	num += amount;
	if (num > std::numeric_limits<int>::max())
		std::cout << RED_OPEN << "Error: overflow: INT_MAX" << CLOSE << std::endl;
	else
	{
		num2 = this->_maxEnergyPoints - this->_energyPoints;
		this->_energyPoints += static_cast<int>(amount);
		if (this->_energyPoints > static_cast<int>(this->_maxEnergyPoints))
			this->_energyPoints = static_cast<int>(this->_maxEnergyPoints);
		if (num2 > amount)
			num2 = amount;
		std::cout << GREEN_OPEN << this->_type << " " << this->_name << " got " << num2 << " EP! Great!" << CLOSE << std::endl;
		std::cout << this->_type << " " << this->_name << " - [ Health over here! ]" << std::endl;
	}
}

int 				ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 				ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string			ClapTrap::getName() const
{
	return this->_name;
}

std::string			ClapTrap::getType() const
{
	return this->_type;
}