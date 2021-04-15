#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

typedef Base	*(*FuncPtr)();

Base				*newA()
{
	return new A;
}

Base				*newB()
{
	return new B;
}

Base				*newC()
{
	return new C;
}

Base			*generate(void)
{
	FuncPtr		ptr[3] = { &newA, &newB, &newC };

	return dynamic_cast<Base*>((*ptr[std::rand()%3])());
}