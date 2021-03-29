#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name), _name(name)
{
	std::cout << CNSTR_N << std::endl;
	std::cout << "NINJA-TP - [ Why did they build me out of galvanized flesh?! ]" << std::endl;
	this->_hitPoints = 60;
	this->_energyPoints = 120;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << DESTR_N << std::endl;
	std::cout << "NINJA-TP " << this->_name << " - [ Take these, gorgeous, you'll feel better! ]" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &f) : ClapTrap(f)
{
	std::cout << COPY_CNSTR_N << std::endl;
	*this = f;
}

NinjaTrap			&NinjaTrap::operator=(NinjaTrap const &f)
{
	std::cout << ASSIGN_N << std::endl;
	if (this != &f)
	{
		this->_name = f.getName();
		this->_hitPoints = f.getHitPoints();
		this->_energyPoints = f.getEnergyPoints();
	}
	return *this;
}

int					NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW_OPEN << "NINJA-TP " << this->getName() << " attacks " \
	<< target << " in the ranged attack, causing " << NinjaTrap::_rangedAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << "NINJA-TP " << this->_name << " - [ Huh, robot's don't do that. ]" << std::endl;
	return NinjaTrap::_rangedAttackDamage;
}

int 				NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << YELLOW_OPEN << "NINJA-TP " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << NinjaTrap::_meleeAttackDamage \
	<< " points of damage!" << CLOSE << std::endl;
	std::cout << "NINJA-TP " << this->_name << " - [ Disgusting. I love it! ]" << std::endl;
	return NinjaTrap::_meleeAttackDamage;
}

void				NinjaTrap::takeDamage(unsigned int amount)
{
	long 			num;
	long 			num2;

	num = this->_hitPoints;
	num -= amount - static_cast<unsigned int>(NinjaTrap::_armorDamageReduction);
	if (num < std::numeric_limits<int>::min())
		std::cout << RED_OPEN << "Error: overflow: INT_MIN" << CLOSE << std::endl;
	else
	{
		num2 = amount + static_cast<unsigned int>(NinjaTrap::_armorDamageReduction);
		if (num2 > this->_hitPoints)
			num2 = this->_hitPoints;
		else
			num2 = amount - static_cast<unsigned int>(NinjaTrap::_armorDamageReduction);
		this->_hitPoints -= static_cast<int>(amount) - NinjaTrap::_armorDamageReduction;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << RED_OPEN << "NINJA-TP " << this->_name << " lost " << num2 << " HP!" << CLOSE << std::endl;
		std::cout << "NINJA-TP " << this->_name << " - [ My robotic flesh! AAHH! ]" << std::endl;
	}
}

void 				NinjaTrap::beRepaired(unsigned int amount)
{
	long 			num;
	unsigned int 	num2;

	num = this->_energyPoints;
	num += amount;
	if (num > std::numeric_limits<int>::max())
		std::cout << RED_OPEN << "Error: overflow: INT_MAX" << CLOSE << std::endl;
	else
	{
		num2 = NinjaTrap::_maxEnergyPoints - this->_energyPoints;
		this->_energyPoints += static_cast<int>(amount);
		if (this->_energyPoints > NinjaTrap::_maxEnergyPoints)
			this->_energyPoints = NinjaTrap::_maxEnergyPoints;
		if (num2 > amount)
			num2 = amount;
		std::cout << GREEN_OPEN << "NINJA-TP " << this->_name << " got " << num2 << " EP! Great!" << CLOSE << std::endl;
		std::cout << "NINJA-TP " << this->_name << " - [ Healsies! ]" << std::endl;
	}
}

int 				NinjaTrap::ninjaShoebox()
{
	std::string 	challenges[5] = { "sneaks from behind, swings to kick with her right leg and slips on a banana peel",
									 "runs to her rival ... and ... her rival opens the door for her",
									 "offers to drink a cup of coffee",
									 "finds herself in a parallel universe ... and runs away from huge monsters",
									 "returns home and sees FR4G-TP watching the series with her mom" };
	int				energy[5] = { 5, 10, 15, 20, 25 };
	int 			i;

	i = std::rand()%5;
	std::cout << "NINJA-TP " << this->_name << " - [ Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! ]" << std::endl;
	std::cout << GREEN_OPEN << "NINJA-TP " << this->_name << " " << challenges[i] << "! Great! Keep this up!" << CLOSE << std::endl;
	return energy[i];
}

int 				NinjaTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int 				NinjaTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

std::string 		NinjaTrap::getName() const
{
	return this->_name;
}