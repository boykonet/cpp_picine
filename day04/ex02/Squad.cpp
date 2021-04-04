#include "Squad.hpp"

Squad::Squad() : _units(nullptr), _countUnits(0)
{
}

Squad::~Squad()
{
	if (this->_units)
	{
		for (int i = 0; i < this->_countUnits; i++)
			delete this->_units[i];
		delete [] this->_units;
	}
	this->_units = nullptr;
	this->_countUnits = 0;
}

Squad::Squad(Squad const &o)
{
	*this = o;
}

Squad					&Squad::operator=(Squad const &o)
{
	if (this != &o)
	{
		if (this->_units)
		{
			for (int i = 0; i < this->_countUnits; i++)
				delete this->_units[i];
			delete [] this->_units;
		}
		this->_units = new ISpaceMarine* [o.getCount()];
		this->_countUnits = 0;
		for (int i = 0; i < o.getCount(); i++)
		{
			this->_units[i] = o.getUnit(i);
			this->_countUnits++;
		}
	}
	return *this;
}

int						Squad::getCount() const
{
	return this->_countUnits;
}

ISpaceMarine*			Squad::getUnit(int n) const
{
	if (n >= 0 && this->_countUnits && n < this->_countUnits)
		return this->_units[n];
	return nullptr;
}

int						Squad::push(ISpaceMarine *m)
{
	ISpaceMarine	**u;

	if (m)
	{
		if (!this->_countUnits)
		{
			this->_units = new ISpaceMarine* [1];
			this->_units[0] = m;
			this->_countUnits++;
		}
		else
		{
			u = this->_units;
			this->_units = new ISpaceMarine* [this->_countUnits + 1];
			for (int i = 0; i < this->_countUnits + 1; i++)
			{
				if (i < this->_countUnits)
					this->_units[i] = u[i];
				else
				{
					this->_units[i] = m;
					this->_countUnits++;
					break ;
				}
			}
			delete [] u;
		}
	}
	return this->getCount();
}