#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();
	static void		announce();
	Zombie			*newZombie(std::string name);

private:
	std::string		type;
	std::string		nm;
};

#endif
