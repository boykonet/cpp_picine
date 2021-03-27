#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <time.h>

int			main(void)
{
	FragTrap	a = FragTrap("Alice");
	ScavTrap	b = ScavTrap("Fedor");
	NinjaTrap	n = NinjaTrap("Feixua");
	NinjaTrap	nn( n );
	std::string end = "\e[0m";
	int 		hp;

	std::cout << std::endl;
	std::srand(std::time(NULL));
	for (int i = 0; i < 30; i++)
	{
		std::cout << "\e[1;4;35m" << i << " rouuuuuuuund (GOOOONG)" << end << std::endl;
		if (i == 5 || i == 7)
		{
			if (i == 5)
			{
				hp = a.meleeAttack(b.getName());
				b.takeDamage(hp);
				a.beRepaired(5);
			}
			else
			{
				hp = n.meleeAttack(b.getName());
				b.takeDamage(hp);
				n.beRepaired(5);
			}
		}
		else if (i == 0 || i == 3 || i == 6)
		{
			if (i == 6)
			{
				hp = a.vaulthunter_dot_exe(b.getName());
				if (hp > 0)
					b.takeDamage(hp);
			}
			else if (i == 3)
			{
				hp = b.challengeNewcomer();
				b.beRepaired(hp);
			}
			else
			{
				hp = n.ninjaShoebox();
				n.beRepaired(hp);
			}
		}
		else if (i == 1 || i == 2)
		{
			if (i == 1)
				hp = b.meleeAttack(a.getName());
			else
				hp = b.rangedAttack(a.getName());
			a.takeDamage(hp);
			b.beRepaired(5);
		}
		else
		{
			if (i == 4 || i == 6)
			{
				hp = n.meleeAttack(a.getName());
				a.takeDamage(hp);
				n.beRepaired(5);
			}
			else
			{
				hp = n.rangedAttack(b.getName());
				b.takeDamage(hp);
				n.beRepaired(5);
			}
		}
		std::cout << "\e[4;39m" << a.getName() << " has " << a.getHitPoints() << " HP and " << b.getName() << " - " << b.getHitPoints() << " HP!" << end << std::endl;
		std::cout << "\e[4;39m" << n.getName() << " has " << n.getHitPoints() << " HP!" << std::endl;
		std::cout << "\e[4;39m" << a.getName() << " has " << a.getEnergyPoints() << " energy points and " << b.getName() << " - " << b.getEnergyPoints() << " energy points!" << end << std::endl;
		std::cout << "\e[4;39m" << n.getName() << " has " << n.getEnergyPoints() << " energy points!" << std::endl;
		if (!a.getHitPoints())
		{
			std::cout << "\e[1;31m" << b.getName() << " died..." << end << std::endl;
			break ;
		}
		else if (!b.getHitPoints())
		{
			std::cout << "\e[1;31m" << a.getName() << " died..." << end << std::endl;
			break ;
		}
		else if (!n.getHitPoints())
		{
			std::cout << "\e[1;31m" << n.getName() << " died..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;
	}

	std::cout << nn.getName() << " has " << nn.getHitPoints() << " HP!" << std::endl;
	nn = n;
	std::cout << nn.getName() << " has " << nn.getHitPoints() << " HP!" << std::endl;
	return 0;
}
