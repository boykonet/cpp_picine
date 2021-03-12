#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string t, std::string n);
	~Zombie();
	void			announce();

private:
	std::string		type;
	std::string		name;
};

#endif
