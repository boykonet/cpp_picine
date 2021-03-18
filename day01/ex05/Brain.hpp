#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
public:
	Brain();
	Brain(int p, int c);
	~Brain();
	std::string		identify() const;
private:
	int				_productivity;
	int				_creativity;
};

#endif
