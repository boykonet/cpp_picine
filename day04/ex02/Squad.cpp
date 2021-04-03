#include "Squad.hpp"

Squad::Squad() : _s(nullptr)
{
}

Squad::~Squad()
{
	if (this->_s)
	{
		for (int i = 0; this->_s[i]; i++)
			delete this->_s[i];
		delete [] this->_s;
	}
}

Squad::Squad(Squad const &o)
{
	*this = o;
}

Squad					&Squad::operator=(Squad const &o)
{
	if (this != &o)
	{
		;
	}
	return *this;
}

int						Squad::getCount() const
{
	int		i;

	i = 0;
	if (this->_s)
	{
		while (this->_s[i])
			i++;
	}
	return i;
}

ISpaceMarine*			Squad::getUnit(int n) const
{
	int 	count;

	count = this->getCount();
	if (n >= 0 && count && n < count)
		return this->_s[n];
	return nullptr;
}

int						Squad::push(ISpaceMarine *m)
{
	ISpaceMarine	**u;
	int 			count;

	count = this->getCount();
	if (m)
	{
		if (!count)
		{
			this->_s = new ISpaceMarine* [1];
			this->_s[0] = m;
		}
		else
		{
			u = this->_s;
			this->_s = new ISpaceMarine* [count + 1];
			for (int i = 0; i < count + 1; i++)
			{
				if (i < count)
					this->_s[i] = u[i];
				else
					this->_s[i] = m;
			}
			delete [] u;
		}
	}
	return this->getCount();
}