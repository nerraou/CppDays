#include "Span.hpp"
#include <iostream>

int main()
{
	Span var(5);

	std::vector<int> vec;

	var.addNumber(6);
	var.addNumber(3);
	var.addNumber(17);
	// var.addNumber(10); // uncomment this line to get an error

	vec.push_back(9);
	vec.push_back(11);

	try
	{
		var.fillRange(vec.begin(), vec.end());
		std::cout << "shortest span " << var.shortestSpan() << std::endl;
		std::cout << "longest span " << var.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
