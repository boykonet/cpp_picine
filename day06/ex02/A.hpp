#ifndef A_CPP
# define A_CPP

# include <iostream>
# include "Base.hpp"

class			A : public Base
{
public:
	A();
	virtual ~A();
	A(A const &o);
	A					&operator=(A const &o);
//	static Base			*copy();
	std::string 		getName() const;
};

#endif
