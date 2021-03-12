#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();
private:
	Zombie		*zombie;
};

#endif
