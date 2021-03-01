#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	static void		setZombieType();
	void			randomChump();

private:
	std::string		type;
	std::string		nm;
};

#endif
