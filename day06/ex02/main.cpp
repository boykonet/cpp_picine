#include "Classes.hpp"

Base			*generate(void);

int				main()
{
	Base		*ptr;

	ptr = generate();
	std::cout << "Identify from pointer: ";
	identify_from_pointer(ptr);
	std::cout << "Identify from reference: ";
	identify_from_reference(*ptr);
	return 0;
}
