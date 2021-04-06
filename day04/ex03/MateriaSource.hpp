#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define NUM_MATERIA	4
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class			MateriaSource : public IMateriaSource
{
private:
	AMateria				*_m[NUM_MATERIA];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &o);
	MateriaSource			&operator=(MateriaSource const &o);
	~MateriaSource();
	void					learnMateria(AMateria *o);
	AMateria				*createMateria(std::string const &type);
};

#endif