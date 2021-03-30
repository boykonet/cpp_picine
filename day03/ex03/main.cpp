#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <time.h>

int			main(void)
{
	ClapTrap		clap = ClapTrap("CLAP");
	FragTrap		frag = FragTrap("FRAG");
	ScavTrap		scav = ScavTrap("SCAV");
	NinjaTrap		ninja = NinjaTrap("NINJA");
	NinjaTrap		nn( ninja );
	std::string 	end = "\e[0m";
	unsigned int 	hp;

	std::cout << std::endl;
	std::srand(std::time(NULL));
	for (int i = 0; i < 30; i++)
	{
		std::cout << "\e[1;4;35m" << i << " rouuuuuuuund (GOOOONG)" << end << std::endl;
		if (i == 0 || i == 4 || i == 8)
		{
			if (i == 0)
			{
				hp = ninja.ninjaShoebox(clap);
				if (hp > 0)
					clap.takeDamage(hp);
			}
			else
			{
				if (i == 4)
				{
					hp = ninja.rangedAttack(clap.getName());
					clap.takeDamage(hp);
					ninja.beRepaired(5);
				}
				else
				{
					hp = ninja.meleeAttack(clap.getName());
					clap.takeDamage(hp);
					ninja.beRepaired(5);
				}
			}
		}
		else if (i == 1 || i == 5 || i == 9)
		{
			if (i == 1)
			{
				hp = ninja.ninjaShoebox(frag);
				if (hp > 0)
					frag.takeDamage(hp);
			}
			else
			{
				if (i == 5)
				{
					hp = ninja.rangedAttack(frag.getName());
					frag.takeDamage(hp);
					ninja.beRepaired(5);
				}
				else
				{
					hp = ninja.meleeAttack(frag.getName());
					frag.takeDamage(hp);
					ninja.beRepaired(5);
				}
			}
		}
		else if (i == 2 || i == 6 || i == 10)
		{
			if (i == 2)
			{
				hp = ninja.ninjaShoebox(scav);
				if (hp > 0)
					scav.takeDamage(hp);
			}
			else
			{
				if (i == 6)
				{
					hp = ninja.rangedAttack(scav.getName());
					scav.takeDamage(hp);
					ninja.beRepaired(5);
				}
				else
				{
					hp = ninja.meleeAttack(scav.getName());
					scav.takeDamage(hp);
					ninja.beRepaired(5);
				}
			}
		}
		else if (i == 3 || i == 7 || i == 11)
		{
			if (i == 3)
			{
				hp = ninja.ninjaShoebox(nn);
				if (hp > 0)
					nn.takeDamage(hp);
			}
			else
			{
				if (i == 7)
				{
					hp = ninja.rangedAttack(nn.getName());
					nn.takeDamage(hp);
					ninja.beRepaired(5);
				}
				else
				{
					hp = ninja.meleeAttack(nn.getName());
					nn.takeDamage(hp);
					ninja.beRepaired(5);
				}
			}
		}
		std::cout << "\e[4;39m" << clap.getType() << " " << clap.getName() << " has " << clap.getHitPoints() << " HP, " \
		<< frag.getType() << " " << frag.getName() << " - " << frag.getHitPoints() << " HP, " \
		<< scav.getType() << " " << scav.getName() << " has " << scav.getHitPoints() << " HP and " \
		<< nn.getType() << " " << nn.getName() << " has " << nn.getHitPoints() << " HP!" << end << std::endl;
		std::cout << "\e[4;39m" << clap.getType() << " " << clap.getName() << " has " << clap.getEnergyPoints() << " EP, " \
		<< frag.getType() << " " << frag.getName() << " - " << frag.getEnergyPoints() << " EP, " \
		<< scav.getType() << " " << scav.getName() << " has " << scav.getEnergyPoints() << " EP and " \
		<< nn.getType() << " " << nn.getName() << " has " << nn.getEnergyPoints() << " EP!" << end << std::endl;
		if (!clap.getHitPoints())
		{
			std::cout << "\e[1;31m" << clap.getName() << " died..." << end << std::endl;
			break ;
		}
		else if (!frag.getHitPoints())
		{
			std::cout << "\e[1;31m" << frag.getName() << " died..." << end << std::endl;
			break ;
		}
		else if (!scav.getHitPoints())
		{
			std::cout << "\e[1;31m" << scav.getName() << " died..." << end << std::endl;
			break ;
		}
		else if (!nn.getHitPoints())
		{
			std::cout << "\e[1;31m" << nn.getName() << " died..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;
	}
	std::cout << nn.getName() << " has " << nn.getHitPoints() << " HP!" << std::endl;
	nn = ninja;
	std::cout << nn.getName() << " has " << nn.getHitPoints() << " HP!" << std::endl;
	return 0;
}
