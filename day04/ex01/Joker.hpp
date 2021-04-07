#ifndef JOKER_HPP
# define JOKER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class			Joker : public Enemy
{
public:
	Joker();
	virtual ~Joker();
	Joker(Joker const &o);
	Joker					&operator=(Joker const &o);
};

#endif