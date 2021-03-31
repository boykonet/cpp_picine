#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <time.h>

int			main(void)
{
	SuperTrap		super = SuperTrap("SUPERTRAP");
	SuperTrap		ss( super );
	ScavTrap		scav = ScavTrap("SCAVTRAP");
	std::string 	end = "\e[0m";
	unsigned int 	hp;

	std::srand(std::time(NULL));
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\e[1;4;35m" << i << " rouuuuuuuund (GOOOONG)" << end << std::endl;
		if (i == 0 || i == 2 || i == 4 || i == 6)
		{
			hp = super.ninjaShoebox(scav);
			if (hp > 0)
				scav.takeDamage(hp);
		}
		else
		{
			hp = super.vaulthunter_dot_exe(scav.getName());
			if (hp > 0)
				scav.takeDamage(hp);
		}
		std::cout << "\e[4;39m" << super.getType() << " " << super.getName() << " has " << super.getHitPoints() << " HP and " \
		<< scav.getType() << " " << scav.getName() << " - " << scav.getHitPoints() << " HP!" << end << std::endl;
		std::cout << "\e[4;39m" << super.getType() << " " << super.getName() << " has " << super.getEnergyPoints() << " EP and " \
		<< scav.getType() << " " << scav.getName() << " - " << scav.getEnergyPoints() << " EP!" << end << std::endl;
		if (super.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << super.getType() << " " << super.getName() << " killed " \
			<< scav.getType() << " " << scav.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		else if (scav.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << scav.getType() << " " << scav.getName() << " killed " \
			<< super.getType() << " " << super.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;

	}
	std::cout << super.getType() << " " << super.getName() << " has " << super.getHitPoints() << " HP!" << std::endl;
	super = ss;
	std::cout << super.getType() << " " << super.getName() << " has " << super.getHitPoints() << " HP!" << std::endl;
	return 0;
}
