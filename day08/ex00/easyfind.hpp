#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iterator>
# include <algorithm>
# include <vector>

class 					NotFound : public std::exception
{
public:
	virtual const char 	*what() const throw();
};

const char 				*NotFound::what() const throw()
{
	return "Number is not found =(";
}

template <typename T>
typename T::iterator 			easyfind(T &vector, int num)
{
	typename T::iterator		it;

	it = std::find(vector.begin(), vector.end(), num);

	if (it == vector.end())
		throw NotFound();
	return it;
}

template <typename T>
typename T::const_iterator 		easyfind(T const &vector, int num)
{
	typename T::const_iterator	it;

	it = std::find(vector.begin(), vector.end(), num);

	if (it == vector.end())
		throw NotFound();
	return it;
}

#endif