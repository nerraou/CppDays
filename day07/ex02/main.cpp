#include "Array.hpp"

int main()
{
	Array<int> array(10);
	Array<int> arrayCopy = array;

	array[0] = 1;
	std::cout << arrayCopy[0] << std::endl;
	return 0;
}
