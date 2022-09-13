#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>
#include <climits>

class Convert
{
private:
	int _intNum;
	float _floatNum;
	double _doubleNum;
	std::string _type;

public:
	Convert();
	Convert(const char *num);
	Convert(const Convert &other);
	Convert &operator=(Convert const &other);
	operator float();
	operator double();
	operator int();
	operator char();
	~Convert();
};
