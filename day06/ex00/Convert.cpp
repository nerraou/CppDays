#include <Convert.hpp>

Convert::Convert()
{
}

Convert::Convert(const char *num) : _num(num)
{
}

Convert::operator float()
{
	char *str;
	float result;

	result = strtof(this->_num.c_str(), &str);
	if (*str == 'f' || *str == 'F')
		str++;
	if (*str != '\0')
		throw std::invalid_argument("float: impossible.");
	return result;
}

Convert::operator double()
{
	std::cout << "double operator " << std::endl;
	char *str;
	return strtod(this->_num.c_str(), &str);
}

// Convert::operator int()
// {
// 	std::cout << "int operator " << std::endl;
// }
Convert::~Convert()
{
}
