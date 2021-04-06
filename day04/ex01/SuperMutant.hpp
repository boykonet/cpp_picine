#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class			SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &o);
	SuperMutant				&operator=(SuperMutant const &o);
	void					takeDamage(int damage);
};

#endif