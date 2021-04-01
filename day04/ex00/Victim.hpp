#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class 			Victim
{
public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(Victim const &o);
	Victim					&operator=(Victim const &o);
	virtual void			getPolymorphed() const;
	virtual std::string 	getName() const;
private:
	Victim();
protected:
	std::string 			_name;
};

std::ostream 				&operator<<(std::ostream &os, Victim const &o);

#endif