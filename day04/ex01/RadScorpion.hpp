#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class			RadScorpion : public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &o);
	RadScorpion				&operator=(RadScorpion const &o);
};

#endif