#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
	Pony(std::string n, std::string d, std::string y);
	~Pony();
	const std::string		&getName() const;
	const std::string		&getBreed() const;
	const std::string		&getYearsOld() const;

private:
	std::string				_name;
	std::string				_breed;
	std::string				_yearsOld;
};

#endif
