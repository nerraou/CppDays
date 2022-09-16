#pragma once

#include <iostream>
#include <exception>
template <class T>
class Array
{
private:
	T *array;
	unsigned int _size;

public:
	Array()
	{
		this->_size = 0;
		this->array = nullptr;
	}

	Array(unsigned int n)
	{
		this->_size = n;
		this->array = new T[n];
	}

	Array(const Array &other)
	{
		*this = other;
	}

	Array &operator=(const Array &other)
	{
		this->_size = other.size();

		if (other.array == nullptr)
			this->array = nullptr;
		else
		{
			this->array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
			{
				this->array[i] = other.array[i];
			}
		}

		return *this;
	}

	unsigned int size() const
	{
		return this->_size;
	}

	T &operator[](unsigned int index)
	{
		if (index >= this->_size)
			throw std::out_of_range("Out of range.");
		return this->array[index];
	}

	~Array()
	{
		delete[] this->array;
	}
};
