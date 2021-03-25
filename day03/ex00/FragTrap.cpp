#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << CNSTR << std::endl;
	std::cout << "[ Coffee? Black... like my soul. ]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << DESTR << std::endl;
	std::cout << "[ You. Are. Not. Dead! Now shut the hell up! Your new designation is FR4G-TP. "
			  "Fragtrap. You are a merciless killing machine. Got it? ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << COPY_CNSTR << std::endl;
	std::cout << "[ Hey, best friend! ]" << std::endl;
	*this = f;
}

FragTrap		&FragTrap::operator=(FragTrap const &f)
{
	std::cout << ASSIGN << std::endl;
	std::cout << "[ Hocus pocus! ]" << std::endl;
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
	std::cout << "[ I'm a tornado of death and bullets! ]" << std::endl;
	return FragTrap::_rangedAttackDamage;
}

int 		FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "\e[1;36m" << "FR4G-TP " << this->_name << " attacks " \
	<< target << " in the melee attack, causing " << FragTrap::_meleeAttackDamage \
	<< " points of damage!" << END << std::endl;
	std::cout << "[ " << target << ", I expect you to die! ]" << std::endl;
	std::cout << "[ Success! My spell to make you want to hang out with me worked! ]" << std::endl;
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
	std::cout << "[ Sooooo... how are things? ]" << std::endl;
	if (this->_energyPoints > FragTrap::_maxEnergyPoints)
		this->_energyPoints = FragTrap::_maxEnergyPoints;
}

int 			FragTrap::vaulthunter_dot_exe(std::string const &target)
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