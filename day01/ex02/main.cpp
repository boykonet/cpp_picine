#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int				main(void)
{
	ZombieEvent		event;

	std::srand(std::time(NULL));
	event.setZombieType("zombie1");	
	event.randomChump();
}
