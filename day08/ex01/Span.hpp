#pragma once

#include <vector>
#include <cmath>
#include <algorithm>

class Span
{
private:
	unsigned int _N;
	std::vector<int> vec;

public:
	Span();
	Span(unsigned int N);
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
	~Span();
};
