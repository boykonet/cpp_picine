#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie				*newZombie(std::string name);
	void				setZombieType(std::string type);
	void				randomChump();

private:
	std::string			_type_z;
};

#endif
