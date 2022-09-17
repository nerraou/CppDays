#include <iostream>
#include <vector>
#include "easyFind.hpp"

int main()
{
	std::vector<int> vec;

	std::cout << "vector size: " << vec.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}
	try
	{

		std::cout << easyFind<std::vector<int> >(vec, -1) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}