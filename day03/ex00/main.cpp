#include <iostream>
#include "FragTrap.hpp"

int			main(void)
{
	FragTrap	a = FragTrap("Alisa");
	FragTrap	b( a );
	FragTrap	c = FragTrap("Fedor");

	c.takeDamage(a.meleeAttack(c.getName()));
	std::cout << a.getName() << " has " << a.getHitPoints() << " points and " << c.getName() << " has " << c.getHitPoints() << " points!" << std::endl;

	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	b = c;
	std::cout << b.getName() << " has " << b.getHitPoints() << " points!" << std::endl;
	return 0;
}
