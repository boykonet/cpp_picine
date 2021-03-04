#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->type_z = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*zombie = new Zombie(this->type_z, name);

	zombie->announce();
	return (zombie);
}

void				ZombieEvent::randomChump()
{
	std::string		names[10] = { "Alisa", "Borya", "Dima", \
								"Eva", "Masha", "katya", \
								"Valera", "Egor", "Sasha", \
								"YourName" };
	Zombie			*zombie1;

	//std::srand(std::time(NULL));
	zombie1 = this->newZombie(names[std::rand()%10]);
	delete zombie1;
}

