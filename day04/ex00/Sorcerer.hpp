#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class		Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(Sorcerer const &o);
	Sorcerer			&operator=(Sorcerer const &o);
	std::string 		getName() const;
	std::string 		getTitle() const;

private:
	Sorcerer();
	std::string			_name;
	std::string			_title;
};

std::ostream 			&operator<<(std::ostream &os, Sorcerer const &o);

#endif