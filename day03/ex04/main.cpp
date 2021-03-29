#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
# include "SuperTrap.hpp"
#include <time.h>

int			main(void)
{
	SuperTrap	a = SuperTrap("Superman");
	ScavTrap	s = ScavTrap("Ironman");

	a.ninjaShoebox();
	std::cout << std::endl;
	a.vaulthunter_dot_exe(s.getName());
	return 0;
}
