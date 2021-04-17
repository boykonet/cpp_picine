#include <iostream>
#include <string>

class			Base
{
public:
	virtual ~Base() {}
};

class			A : public Base
{
};

class			B : public Base
{
};

class			C : public Base
{
};

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
	std::string name[3] = { "A", "B", "C" };
	int 		i;

	i = std::rand()%3;
	std::cout << "Return object of " << name[i] << " class" << std::endl;
	return ((*ptr[i])());
}

void			identify_from_pointer(Base *p)
{
	A			*a;
	B			*b;
	C			*c;

	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base &p)
{
	try
	{
		A		&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}

	try
	{
		B		&b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}

	try
	{
		C		&c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast &b)
	{
		(void)b;
	}
}

int				main()
{
	Base		*ptr;

	std::srand(std::time(NULL));
	ptr = generate();
	std::cout << "Identify from pointer: ";
	identify_from_pointer(ptr);
	std::cout << "Identify from reference: ";
	identify_from_reference(*ptr);
	delete ptr;
	return 0;
}
