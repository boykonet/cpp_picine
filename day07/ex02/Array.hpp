#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class		Array
{
private:
	unsigned int			_n;
	T						*_array;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array<T> const &o);
	Array<T>				&operator=(Array<T> const &o);
	T						&operator[](unsigned int n) const;
	unsigned int			size() const;

	class					ErrOverflow : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
};

template <typename T>
Array<T>::Array() : _n(10), _array(new T [_n])
{
	for (unsigned int i = 0; i < this->_n; i++)
		this->_array[i] = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _array(new T [_n])
{
	for (unsigned int i = 0; i < this->_n; i++)
		this->_array[i] = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
	this->_n = 0;
}

template <typename T>
Array<T>::Array(Array<T> const &o) : _n(0), _array(NULL)
{
	*this = o;
}

template <typename T>
Array<T>				&Array<T>::operator=(Array<T> const &o)
{
	if (this != &o)
	{
		delete [] this->_array;
		this->_n = o.size();
		this->_array = new T [_n];
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = o[i];
	}
	return *this;
}

template <typename T>
T						&Array<T>::operator[](unsigned int n) const
{
	if (n < 0 || n >= this->_n)
		throw Array::ErrOverflow();
	return this->_array[n];
}

template <typename T>
unsigned int			Array<T>::size() const
{
	return this->_n;
}

template <typename T>
const char				*Array<T>::ErrOverflow::what() const throw()
{
	return "* * * * * O V E R F L O W * * * * *";
}

#endif
