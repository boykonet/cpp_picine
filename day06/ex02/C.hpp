#ifndef C_CPP
# define C_CPP

# include <iostream>
# include "Base.hpp"

class			C : public Base
{
public:
	C();
	virtual ~C();
	C(C const &o);
	C					&operator=(C const &o);
//	static Base			*copy();
	std::string 		getName() const;
};

#endif
