#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << CNSTR_D_F << std::endl;
	this->_type = "FR4G-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name)
{
	std::cout << CNSTR_F << std::endl;
	this->_type = "FR4G-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_type << " - [ Guess who? ]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << DESTR_F << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ You. Are. Not. Dead! Now shut the hell up! Your new designation is FR4G-TP. "
			  "Fragtrap. You are a merciless killing machine. Got it? ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f) : ClapTrap(f)
{
	std::cout << COPY_CNSTR_F << std::endl;
	*this = f;
}

FragTrap			&FragTrap::operator=(FragTrap const &f)
{
	std::cout << ASSIGN_F << std::endl;
	if (this != &f)
	{
		this->_name = f.getName();
		this->_type = f.getType();
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
		this->_maxHitPoints = 100;
		this->_maxEnergyPoints = 100;
		this->_level = 1;
		this->_meleeAttackDamage = 30;
		this->_rangedAttackDamage = 20;
		this->_armorDamageReduction = 5;
	}
	return *this;
}

unsigned int		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW_OPEN << this->_type << " " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << this->_rangedAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ I'm a tornado of death and bullets! ]" << std::endl;
	return this->_rangedAttackDamage;
}

unsigned int 		FragTrap::meleeAttack(const std::string &target)
{
	std::cout << YELLOW_OPEN << this->_type << " " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << this->_meleeAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << this->_type << " " << this->_name << " - [ Success! My spell to make you want to hang out with me worked! ]" << std::endl;
	return this->_meleeAttackDamage;
}

void				FragTrap::takeDamage(unsigned int amount)
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
		std::cout << this->_type << " " << this->_name << " - [ Extra ouch! ]" << std::endl;
	}
}

void 				FragTrap::beRepaired(unsigned int amount)
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
		std::cout << this->_type << " " << this->_name << " - [ Sooooo... how are things? ]" << std::endl;
	}
}

int 				FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string 	attacks[5] = { "kick", "baton", "chair", "typewriter", "palm" }; // нога, дубина, стул, печатная машинка, ладонь
	int				energy[5] = { 5, 10, 15, 20, 25 };
	int 			i;

	i = 0;
	if (this->_energyPoints < energy[4])
	{
		std::cout << YELLOW_OPEN << this->_type << " " << this->_name << " - khm... You don't have energy, sorryyyyyyyyyy:(" << CLOSE << std::endl;
		return (0);
	}
	else
	{
		i = std::rand()%5;
		std::cout << GREEN_OPEN << this->_type << " " << this->_name << " attacks " << target << " a " << attacks[i] << "! Great! Keep this up!" << CLOSE << std::endl;
		this->_energyPoints -= energy[4];
		std::cout << this->_type << " " << this->_name << " - [ Freeze! I don't know why I said that. ]" << std::endl;
		std::cout << GREEN_OPEN << this->_type << " " << this->_name << " has " << this->_energyPoints << " energy points!" << CLOSE << std::endl;
	}
	return energy[i];
}

int 				FragTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 				FragTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string 		FragTrap::getName() const
{
	return this->_name;
}

std::string 		FragTrap::getType() const
{
	return this->_type;
}