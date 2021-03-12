#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int				main(void)
{
	ZombieEvent		event;
	Zombie			*z;

	std::srand(std::time(NULL));
	event.setZombieType("zombie1");
	event.randomChump();
}
