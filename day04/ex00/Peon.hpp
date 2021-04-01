#ifndef PEON_HPP
# define PEON_HPP

class 			Peon
{
public:
	Peon(std::string name);
	~Peon();
	Peon(Peon const &o);
	Peon				&operator=(Peon const &o);
	std::string 		getName() const;
private:
	Peon();
	std::string 		_name;
};

std::ostream 			&operator<<(std::ostream &os, Peon const &o);

#endif