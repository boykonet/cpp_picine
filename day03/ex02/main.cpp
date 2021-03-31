#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <time.h>

int			main(void)
{
	FragTrap		a = FragTrap("Alice");
	ScavTrap		b = ScavTrap("Fedor");
	ScavTrap		c( b );
	std::string 	end = "\e[0m";
	unsigned int 	hp;

	std::cout << std::endl;
	std::srand(std::time(NULL));
	for (int i = 0; i < 30; i++)
	{
		std::cout << "\e[1;4;35m" << i << " rouuuuuuuund (GOOOONG)" << end << std::endl;
		if (i == 5 || i == 7 || i == 9)
		{
			hp = a.meleeAttack(b.getName());
			b.takeDamage(hp);
			a.beRepaired(5);
		}
		else if (i == 0 || i == 3 || i == 6)
		{
			if (i == 6)
			{
				hp = a.vaulthunter_dot_exe(b.getName());
				if (hp > 0)
					b.takeDamage(hp);
			}
			else
			{
				hp = b.challengeNewcomer();
				b.beRepaired(hp);
			}
		}
		else
		{
			if (i == 1)
				hp = b.meleeAttack(a.getName());
			else
				hp = b.rangedAttack(a.getName());
			a.takeDamage(hp);
			b.beRepaired(5);
		}
		std::cout << "\e[4;39m" << a.getType() << " " << a.getName() << " has " \
		<< a.getHitPoints() << " HP and " << b.getType() << " " << b.getName() << " - " \
		<< b.getHitPoints() << " HP!" << end << std::endl;

		std::cout << "\e[4;39m" << a.getType() << " " << a.getName() << " has " \
		<< a.getEnergyPoints() << " energy points and " << b.getType() << " " << b.getName() << " - " \
		<< b.getEnergyPoints() << " energy points!" << end << std::endl;
		if (a.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << b.getType() << " " << b.getName() << " killed " \
			<< a.getType() << " " << a.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		else if (b.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << a.getType() << " " << a.getName() << " killed " \
			<< b.getType() << " " << b.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;
	}

	std::cout << c.getType() << " " << c.getName() << " has " << c.getHitPoints() << " HP!" << std::endl;
	c = b;
	std::cout << c.getType() << " " << c.getName() << " has " << c.getHitPoints() << " HP!" << std::endl;
	return 0;
}
