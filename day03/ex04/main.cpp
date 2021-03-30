#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
# include "SuperTrap.hpp"
#include <time.h>

int			main(void)
{
	SuperTrap	super = SuperTrap("SUPERTRAP");
	SuperTrap	ss( super );
	ScavTrap	scav = ScavTrap("SCAVTRAP");

	super.ninjaShoebox(scav);
	std::cout << std::endl;
	super.vaulthunter_dot_exe(scav.getName());
	return 0;
}
