#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>

class Convert
{
private:
	std::string _num;

public:
	Convert();
	Convert(const char *num);
	Convert(const Convert &other);
	Convert &operator=(Convert const &other);
	operator float();
	operator double();
	operator int();
	~Convert();
};
