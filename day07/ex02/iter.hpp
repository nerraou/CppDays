#pragma once
#include <iostream>

template <typename T>
void iter(T *array, int arrayLength, void function(T const &var))
{
	for (int i = 0; i < arrayLength; i++)
		function(array[i]);
}

template <typename T>
void print(T const &var)
{
	std::cout << var << std::endl;
}

template <typename T>
void ft_iter(T *array, int arrayLength, std::string const &type)
{
	std::cout << "type: " << type << std::endl;
	iter(array, arrayLength, print);
}
