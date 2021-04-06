#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < NUM_MATERIA; i++)
		this->_m[i] = nullptr;
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
			this->_m[i] = o._m[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < NUM_MATERIA; i++)
	{
		if (this->_m[i])
		{
			delete this->_m[i];
			this->_m[i] = nullptr;
		}
	}
}

void					MateriaSource::learnMateria(AMateria *o)
{
	if (o)
	{
		for (int i = 0; i < NUM_MATERIA; i++)
		{
			if (!this->_m[i])
			{
//				std::cout << "Add new element in " << i << " index." << std::endl;
				this->_m[i] = o;
				break ;
			}
			if (i == 3)
				std::cout << "\e[1;31m" << "Storage is full." << "\e[0m" << std::endl;
		}
	}
	else
		std::cout << "\e[1;31m" << "Item doesn't exist." << "\e[0m" << std::endl;
}

AMateria				*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < NUM_MATERIA; i++)
	{
		if (this->_m[i]->getType() == type)
			return this->_m[i]->clone();
	}
	return nullptr;
}