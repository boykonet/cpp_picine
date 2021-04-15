#ifndef B_CPP
# define B_CPP

# include <iostream>
# include "Base.hpp"

class			B : public Base
{
public:
	B();
	virtual ~B();
	B(B const &o);
	B					&operator=(B const &o);
//	static Base			*copy();
	std::string 		getName() const;
};

#endif
