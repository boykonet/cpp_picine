#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class			AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &o);
	AssaultTerminator			&operator=(AssaultTerminator const &o);
	ISpaceMarine				*clone() const;
	void						battleCry() const;
	void						rangedAttack() const;
	void						meleeAttack() const;
};

#endif