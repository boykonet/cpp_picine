#ifndef BASE_CPP
# define BASE_CPP

# include <iostream>

class			Base
{
public:
	Base();
	virtual ~Base();
	Base(Base const &o);
	Base						&operator=(Base const &o);
};

//std::ostream			&operator<<(std::ostream &os, Base const &base);

#endif
