#include "Data.hpp"

int			main(void)
{
	void 	*ptr;
	Data	*data;

	std::srand(std::time(NULL));
	ptr = serialize();
	data = deserialize(ptr);
	std::cout << "sizeof(data) = " << sizeof(*data)
	<< ", string1 = " << data->s1
	<< ", number = " << data->num
	<< ", string2 = " << data->s2 << std::endl;
	delete data;
	return (0);
}