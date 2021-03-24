#include <iostream>
#include "FragTrap.hpp"
#include <time.h>

int			main(void)
{
	FragTrap	a = FragTrap("Alice");
	FragTrap	b( a );
	FragTrap	c = FragTrap("Fedor");
	std::string end = "\e[0m";

	std::cout << std::endl;
	std::srand(std::time(NULL));
	for (int i = 0; i < 30; i++)
	{
		std::cout << "\e[1;4;35m" << i << " rouuuuuuuund (GOOOONG)" << end << std::endl;
		if (!i || i == 3 || i == 5)
		{
			c.takeDamage(a.meleeAttack(c.getName()));
			a.beRepaired(5);
		}
		else if ((i >= 6 && i <= 7) || (i >= 10 && i <= 12))
		{
			if (i == 6 || i == 10)
				c.takeDamage(a.vaulthunter_dot_exe(c.getName()));
			else
				a.takeDamage(c.vaulthunter_dot_exe(a.getName()));
		}
		else
		{
			a.takeDamage(c.rangedAttack(a.getName()));
			c.beRepaired(5);
		}
		std::cout << "\e[4;39m" << a.getName() << " has " << a.getHitPoints() << " HP and " << c.getName() << " - " << c.getHitPoints() << " HP!" << end << std::endl;
		std::cout << "\e[4;39m" << a.getName() << " has " << a.getEnergyPoints() << " energy points and " << c.getName() << " - " << c.getEnergyPoints() << " energy points!" << end << std::endl;
		if (a.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << c.getName() << " killed " << a.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		else if (c.getHitPoints() == 0)
		{
			std::cout << "\e[1;31m" << a.getName() << " killed " << c.getName() << " in a fair fight..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;
	}

	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	b = c;
	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	return 0;
}
