#include <Convert.hpp>

Convert::Convert()
{
}

Convert::Convert(const char *num)
{

	std::string _num = num;
	char *str;
	if (_num.find(".") != std::string::npos && _num.find("f") != std::string::npos)
	{
		this->_floatNum = strtof(num, &str);
		if (*str == 'f' || *str == 'F')
			str++;
		if (*str == '\0')
			this->_type = "float";
		return;
	}
	if (_num.find(".") != std::string::npos)
	{
		this->_doubleNum = strtod(num, &str);
		if (*str == '\0')
			this->_type = "double";
		return;
	}
	else
	{
		this->_intNum = strtol(num, &str, 10);
		if (*str == '\0' && this->_intNum<INT_MAX &&this->_intNum> INT_MIN)
		{
			this->_type = "int";
			return;
		}
		else
			this->_type = "undefined";
	}
}

Convert::operator float()
{
	float result;
	std::cout << this->_type << std::endl;

	if (this->_type.compare("float") == 0)
		return result = static_cast<float>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<float>(this->_doubleNum);
	if (this->_type.compare("float") == 0)
		return result = static_cast<float>(this->_intNum);
	else
		throw std::invalid_argument("impossibel");
}

Convert::operator double()
{
	double result;
	std::cout << this->_type << std::endl;

	if (this->_type.compare("float") == 0)
		return result = static_cast<double>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<double>(this->_doubleNum);
	if (this->_type.compare("float") == 0)
		return result = static_cast<double>(this->_intNum);
	else
		throw std::invalid_argument("impossibel");
}

Convert::operator int()
{
	int result;

	if (this->_type.compare("float") == 0)
		return result = static_cast<int>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<int>(this->_doubleNum);
	if (this->_type.compare("float") == 0)
		return result = static_cast<int>(this->_intNum);
	else
		throw std::invalid_argument("impossibel");
}
Convert::~Convert()
{
}
