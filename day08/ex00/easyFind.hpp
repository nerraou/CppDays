#pragma once

#include <exception>

template <typename T>
int easyFind(T container, int toFind)
{
	typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), toFind);

	if (it != container.end())
	{
		return toFind;
	}
	else
		throw std::exception();
}
