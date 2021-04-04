#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>

class			MateriaSource : public IMateriaSource
{
private:

public:
	~MateriaSource();
	void				learnMateria(AMateria *o);
	AMateria			*createMateria(std::string const &type);
};

#endif