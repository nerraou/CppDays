#pragma once

#include <stack>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack()
	{
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void)
	{
		return this->c.begin();
	}
	iterator end(void)
	{
		return this->c.end();
	}
};
