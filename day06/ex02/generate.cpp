#include <string>
#include "Classes.hpp"

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

	return ((*ptr[std::rand()%3])());
}