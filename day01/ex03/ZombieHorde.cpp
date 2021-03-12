#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string		names[10] = { "Alisa", "Borya", "Dima", \
								"Eva", "Masha", "Katya", \
								"Valera", "Egor", "Sasha", \
								"Elka" };
	int				i;

	i = 0;
	this->zombie = new Zombie[N];
	while (i < N)
	{
		this->zombie[i] = Zombie("zombie", names[rand() % 10]);
		i++;
	}
	i = 0;
	while (i < N)
		this->zombie[i++].announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Zombies are died..." << std::endl;
	delete [] this->zombie;
}
