#include "data.hpp"

uintptr_t serialize(Data *data)
{

	return reinterpret_cast<uintptr_t>(data);
}