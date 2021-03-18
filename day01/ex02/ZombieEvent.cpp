#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type_z = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*zombie = new Zombie(this->_type_z, name);

	return (zombie);
}

void				ZombieEvent::randomChump()
{
	std::string		names[10] = { "Alisa", "Borya", "Dima", \
								"Eva", "Masha", "katya", \
								"Valera", "Egor", "Sasha", \
								"Elka" };
	Zombie			*zombie;

	zombie = this->newZombie(names[std::rand()%10]);
	zombie->announce();
	delete zombie;
}

