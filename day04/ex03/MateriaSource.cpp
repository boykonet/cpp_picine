#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(MateriaSource const &o)
{
	*this = o;
}

MateriaSource			&MateriaSource::operator=(MateriaSource const &o)
{
	if (this != &o)
	{
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			if (this->_m[i])
			{
				delete this->_m[i];
				this->_m[i] = nullptr;
			}
		}
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			this->_m[i] = o.
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
}

void					MateriaSource::learnMateria(AMateria *o)
{
	if (o)
	{
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			if (!this->_m[i])
			{
				this->_m[i] = o->clone();
				break ;
			}
		}
	}
}

AMateria				*MateriaSource::createMateria(std::string const &type)
{
	if ()
	return nullptr;
}