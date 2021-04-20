#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>

template <typename T>
class 			MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
public:
	MutantStack();
	~MutantStack();
	MutantStack(MutantStack<T> const &mutant);
	MutantStack<T>			&operator=(MutantStack<T> const &mutant);
	iterator				begin();
	iterator				end();
	const_iterator			begin() const;
	const_iterator			end() const;
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &mutant)
{
	*this = mutant;
}

template <typename T>
MutantStack<T>								&MutantStack<T>::operator=(MutantStack<T> const &mutant)
{
	if (this != &mutant)
	{
		this->c = mutant.c;
	}
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::begin()
{
	return std::begin(std::stack<T>::c);
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::end()
{
	return std::end(std::stack<T>::c);
}

template <typename T>
typename MutantStack<T>::const_iterator		MutantStack<T>::begin() const
{
	return std::begin(std::stack<T>::c);
}

template <typename T>
typename MutantStack<T>::const_iterator		MutantStack<T>::end() const
{
	return std::end(std::stack<T>::c);
}

#endif