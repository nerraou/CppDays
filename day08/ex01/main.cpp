#include "Span.hpp"
#include <iostream>

int main()
{
	Span var(5);

	var.addNumber(1);
	var.addNumber(7);
	var.addNumber(0);
	var.addNumber(3);

	std::cout << "longest span " << var.longestSpan() << std::endl;
	std::cout << "shortes span " << var.shortestSpan() << std::endl;
	return 0;
}