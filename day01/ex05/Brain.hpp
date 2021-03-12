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
	std::string		identify();
private:
	int				productivity;
	int				creativity;
};

#endif
