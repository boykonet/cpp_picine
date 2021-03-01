#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
	Pony(std::string n, std::string d, std::string y);
	~Pony();
	static void		ponyOnTheHeap();
	static void		ponyOnTheStack();

private:
	std::string		name;
	std::string		breed;
	std::string		yearsOld;
};

#endif
