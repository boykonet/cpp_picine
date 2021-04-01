#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class 			Peon : public Victim
{
public:
	Peon(std::string name);
	~Peon();
	Peon(Peon const &o);
	Peon				&operator=(Peon const &o);
	void				getPolymorphed() const;
	std::string 		getName() const;
private:
	Peon();
};

std::ostream 			&operator<<(std::ostream &os, Peon const &o);

#endif