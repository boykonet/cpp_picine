#include "Data.hpp"

Data		*deserialize(void *raw)
{
	return reinterpret_cast<Data*>(raw);
}