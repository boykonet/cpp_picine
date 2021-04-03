#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"

class			Squad : public ISquad
{
public:
	Squad();
	~Squad();
	Squad(Squad const &o);
	Squad					&operator=(Squad const &o);
	int						getCount() const;
	ISpaceMarine*			getUnit(int n) const;
	int						push(ISpaceMarine *m);
private:
	
};

#endif