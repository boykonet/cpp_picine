#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class			TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(TacticalMarine const &o);
	TacticalMarine				&operator=(TacticalMarine const &o);
	ISpaceMarine				*clone() const;
	void						battleCry() const;
	void						rangedAttack() const;
	void						meleeAttack() const;
};

#endif