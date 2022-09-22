#pragma once

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int _N;
	std::vector<int> vec;

public:
	Span();
	Span(const Span &other);
	Span(unsigned int N);
	Span &operator=(const Span &other);
	void addNumber(int num);
	template <typename InputIterator>
	void fillRange(InputIterator first, InputIterator last)
	{
		if (this->vec.size() + std::distance(first, last) <= this->_N)
			this->vec.insert(this->vec.end(), first, last);
		else
			throw std::out_of_range("Out of range");
	}
	int shortestSpan();
	int longestSpan();
	void print()
	{
		for (size_t i = 0; i < this->_N; i++)
		{
			std::cout << this->vec[i] << "  ";
		}
	}
	~Span();
};
