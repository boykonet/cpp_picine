#ifndef ITEP_HPP
# define ITEP_HPP

# include <iostream>
# include <string>

template <typename T, typename U>
void 		iter(T *array, U len, void (*f)(T))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif