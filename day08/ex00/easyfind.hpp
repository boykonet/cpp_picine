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
void 						easyfind(T &vector, int num)
{
	typename T::iterator	it;

	it = find(vector.begin(), vector.end(), num);

	if (*it != num)
		throw NotFound();
	std::cout << "Number " << *it << " is found!" << std::endl;
}


#endif