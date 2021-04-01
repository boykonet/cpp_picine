#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class 			Victim
{
public:
	Victim(std::string name);
	~Victim();
	Victim(Victim const &o);
	Victim					&operator=(Victim const &o);
	void					getPolymorphed() const;
	std::string 			getName() const;
private:
	Victim();
	std::string 			_name;
};

std::ostream 				&operator<<(std::ostream &os, Victim const &o);

#endif