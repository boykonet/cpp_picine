#include "Data.hpp"

void		*serialize(void)
{
	void 			*ptr;
	Data			*data = new Data;
	std::string 	random1[10] = { "Alisa", "Masha", "Katya", "Oleg", "Gleb",
							  "Rafael", "Dranik", "Smetanka", "Alesha", "Kuznechik" };
	std::string 	random2[10] = { "goes to school", "is reading a book", "talks to her sister",
							  "draws", "is programming", "smiles", "is cooking", "sings",
														 "is dancing", "is sick" };

	data->s1 = random1[std::rand()%10];
	data->num = std::rand()%10;
	data->s2 = random2[std::rand()%10];
	ptr = reinterpret_cast<void*>(data);
	return ptr;
}