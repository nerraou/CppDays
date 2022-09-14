
#include <cstdint>

struct Data
{
	int num;
	char c;
	float fnum;
};

Data *deserialize(uintptr_t raw);
uintptr_t serialize(Data *ptr);