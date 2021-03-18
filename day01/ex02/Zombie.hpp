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
	void			announce() const;

private:
	std::string		_type;
	std::string		_name;
};

#endif
