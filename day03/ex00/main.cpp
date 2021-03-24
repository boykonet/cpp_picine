#include <iostream>
#include "FragTrap.hpp"

int			main(void)
{
	FragTrap	a = FragTrap("Alisa");
	FragTrap	b( a );
	FragTrap	c = FragTrap("Fedor");
	std::string start = "\e[1;31m";
	std::string end = "\e[0m";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " rouuuuuuuund (GOOOONG)" << std::endl;
		if (!i || i == 3 || i == 5)
		{
			c.takeDamage(a.meleeAttack(c.getName()));
			a.beRepaired(a.getMeleeAttackDamage() / 5);
		}
		else
		{
			a.takeDamage(c.rangedAttack(a.getName()));
			c.beRepaired(c.getRangedAttackDamage() / 5);
		}
		std::cout << a.getName() << " - " << a.getHitPoints() << " points and " << c.getName() << " - " << c.getHitPoints() << " points!" << std::endl;
		if (a.getHitPoints() == 0)
		{
			std::cout << start << a.getName() << " was killed " << c.getName() << " in a fierce battle..." << end << std::endl;
			break ;
		}
		else if (c.getHitPoints() == 0)
		{
			std::cout << start << c.getName() << " was killed " << a.getName() << " in a fierce battle..." << end << std::endl;
			break ;
		}
		std::cout << std::endl;
	}

	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	b = c;
	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	return 0;
}
