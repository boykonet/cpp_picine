#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << CNSTR_D_S << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << CNSTR_S << std::endl;
	std::cout << "SC4V-TP - [ Make my day. ]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << DESTR_S << std::endl;
	std::cout << "SC4V-TP " << this->_name << " - [ Crack shot! ]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f)
{
	std::cout << COPY_CNSTR_S << std::endl;
	*this = f;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &f)
{
	std::cout << ASSIGN_S << std::endl;
	if (this != &f)
	{
		this->_name = f.getName();
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_maxHitPoints = 100;
		this->_maxEnergyPoints = 50;
		this->_level = 1;
		this->_meleeAttackDamage = 20;
		this->_rangedAttackDamage = 15;
		this->_armorDamageReduction = 3;
	}
	return *this;
}

unsigned int		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW_OPEN << "SC4V-TP " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << this->_rangedAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << "SC4V-TP " << this->_name << " - [ Sniped! ]" << std::endl;
	return this->_rangedAttackDamage;
}

unsigned int 		ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << YELLOW_OPEN << "SC4V-TP " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << this->_meleeAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << "SC4V-TP " << this->_name << " - [ Hit me, baby! ]" << std::endl;
	return this->_meleeAttackDamage;
}

void				ScavTrap::takeDamage(unsigned int amount)
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
		std::cout << RED_OPEN << "SC4V-TP " << this->_name << " lost " << num2 << " HP!" << CLOSE << std::endl;
		std::cout << "SC4V-TP " << this->_name << " - [ Why do I even feel pain?! ]" << std::endl;
	}
}

void 				ScavTrap::beRepaired(unsigned int amount)
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
		std::cout << GREEN_OPEN << "SC4V-TP " << this->_name << " got " << num2 << " EP! Great!" << CLOSE << std::endl;
		std::cout << "SC4V-TP " << this->_name << " - [ Why do I feel radioactive!? ]" << std::endl;
	}
}

int 				ScavTrap::challengeNewcomer()
{
	std::string 	challenges[5] = { "raps under your window",
									"opens the door with his foot, a shoe fell off",
									"dancing at a party and accidentally fell into the pool",
									"puts a new door instead of a broken one",
									"slammed the door hard and broke the door glass" };
	int				energy[5] = { 5, 10, 15, 20, 25 };
	int 			i;

	i = std::rand()%5;
	std::cout << "SC4V-TP " << this->_name << " - [ That was a close one! ]" << std::endl;
	std::cout << GREEN_OPEN << "SC4V-TP " << this->_name << " " << challenges[i] << "! Great! Keep this up!" << CLOSE << std::endl;
	return energy[i];
}

int 				ScavTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 				ScavTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string 		ScavTrap::getName() const
{
	return this->_name;
}