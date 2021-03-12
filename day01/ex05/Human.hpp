#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	std::string		identify();
	Brain			getBrain;
};

#endif
