#ifndef ITEP_HPP
# define ITEP_HPP

# include <iostream>
# include <string>

template <typename T>
void 		iter(T *array, size_t len, void (*f)(T const&))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif