#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class 			Pony : public Victim
{
public:
	Pony(std::string name);
	~Pony();
	Pony(Pony const &o);
	Pony				&operator=(Pony const &o);
	void				getPolymorphed() const;
	std::string 		getName() const;
private:
	Pony();
};

std::ostream 			&operator<<(std::ostream &os, Pony const &o);

#endif