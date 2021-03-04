#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void				setZombieType(std::string type);
	void				randomChump();

private:
	Zombie				*newZombie(std::string name);
	std::string		type_z;
};

#endif
