#include <iostream>
#include "data.hpp"

int main()
{
	uintptr_t ptr;
	Data *data = new Data();

	data->c = 'n';
	data->num = 42;
	data->fnum = 42.0f;

	ptr = serialize(data);
	Data *data1 = deserialize(ptr);

	std::cout << data1->c << std::endl;
	std::cout << data1->num << std::endl;
	std::cout << data1->fnum << std::endl;

	delete data1;
}