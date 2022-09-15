#include "iter.hpp"

int main()
{
	int intArr[5] = {0, 1, 2, 3, 4};
	::ft_iter<int>(intArr, 5, "int");

	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	::ft_iter<char>(charArr, 5, "char");

	float floatArr[5] = {0.0f, 1.1f, 2.0f, 3.0f, 4.0f};
	::ft_iter<float>(floatArr, 5, "float");

	std::string stringArr[5] = {"hello", "world"};
	::ft_iter<std::string>(stringArr, 5, "String");
	return 0;
}
