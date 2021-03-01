#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string t, std::string n) : type(t), name(n)
{
}

ZombieEvent::~ZombieEvent()
{
}

void			setZombieType()
{

}

void			ZombieEvent::randomChump()
{
	std::string		names[10] = { "Alisa", "Borya", "Dima", \
								"Eva", "Masha", "katya", \
								"Valera", "Egor", "Sasha", \
								"YourName" };
	ZombieEvent		*zombie = ZombieEvent("Zombie", names[rand()%10]);
	zombie->announce();
	//std::srand(std::time(NULL));
	//names[rand()%10];
	delete zombie;
}
