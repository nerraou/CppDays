#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{

	this->_N = other._N;
	this->vec = other.vec;
	return *this;
}

void Span::addNumber(int num)
{
	if (this->vec.size() < this->_N)
	{
		this->vec.push_back(num);
	}
	else
		throw std::exception();
}

int Span::shortestSpan(void)
{
	if (this->vec.size() < 2)
	{
		throw std::exception();
	}
	std::vector<int> shortest;
	std::vector<int>::iterator it;
	for (it = vec.begin(); it + 1 != vec.end(); it++)
	{
		shortest.push_back(abs(*it - *(it + 1)));
	}
	return *std::min_element(shortest.begin(), shortest.end());
}

int Span::longestSpan(void)
{
	if (this->vec.size() < 2)
	{
		throw std::exception();
	}
	return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

Span::~Span()
{
}