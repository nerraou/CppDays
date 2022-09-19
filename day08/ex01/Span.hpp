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
	template <class InputIterator>
	void fillRange(InputIterator first, InputIterator last)
	{
		if (this->vec.size() + std::distance(first, last) <= this->_N)
			this->vec.insert(this->vec.end(), first, last);
		else
			throw std::out_of_range("Out of range");
	}
	int shortestSpan();
	int longestSpan();
	~Span();
};
