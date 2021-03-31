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
	Victim				&operator=(Victim const &o);
	std::string 		getName() const;
private:
	Victim();
	std::string 		_name;
};

#endif