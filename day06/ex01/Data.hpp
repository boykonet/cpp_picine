#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

struct 				Data
{
	std::string 	s1;
	int 			num;
	std::string 	s2;
}__attribute__((__packed__));

void		*serialize(void);
Data		*deserialize(void *raw);

#endif