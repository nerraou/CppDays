#include <Convert.hpp>

Convert::Convert()
{
}

Convert::Convert(const char *num)
{

	std::string _num = num;
	for (size_t i = 0; i < _num.length(); i++)
	{
		_num[i] = tolower(_num[i]);
	}

	char *str;
	if (isFloat(_num))
	{
		this->_floatNum = strtof(num, &str);
		if (*str == 'f')
			str++;
		if (*str == '\0')
			this->_type = "float";
		return;
	}
	if (isDouble(_num))
	{
		this->_doubleNum = strtod(num, &str);
		if (*str == '\0')
			this->_type = "double";
		return;
	}
	else
	{
		this->_intNum = strtol(num, &str, 10);
		if (*str == '\0' && this->_intNum <= INT_MAX && this->_intNum >= INT_MIN)
		{
			this->_type = "int";
			return;
		}
		else
			this->_type = "undefined";
	}
}

bool Convert::isFloat(std::string num)
{
	if (num.find("+") || num.find("-"))
	{
		if (num.compare("+inff") == 0 || num.compare("-inff") == 0)
		{
			this->_impossible = true;
			return true;
		}
		if (num.compare("+nanf") == 0 || num.compare("-nanf") == 0)
		{
			this->_impossible = true;
			return true;
		}
	}
	if (num.compare("inff") == 0 || num.compare("nanf") == 0)
	{
		this->_impossible = true;
		return true;
	}
	if ((num.find(".") != std::string::npos && num.find("f") != std::string::npos))
	{
		this->_impossible = false;
		return true;
	}
	return false;
}

bool Convert::isDouble(std::string num)
{
	if (num.find("+") || num.find("-"))
	{
		if (num.compare("+inf") == 0 || num.compare("-inf") == 0)
		{
			this->_impossible = true;
			return true;
		}
		if (num.compare("+nan") == 0 || num.compare("-nan") == 0)

		{
			this->_impossible = true;
			return true;
		}
	}
	if (num.compare("inf") == 0 || num.compare("nan") == 0)
	{
		this->_impossible = true;
		return true;
	}
	if (num.find(".") != std::string::npos)
	{
		this->_impossible = false;
		return true;
	}
	return false;
}

Convert::operator float()
{
	float result;

	if (this->_type.compare("float") == 0)
		return result = static_cast<float>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<float>(this->_doubleNum);
	if (this->_type.compare("int") == 0)
		return result = static_cast<float>(this->_intNum);
	else
		throw std::invalid_argument("impossible");
}

Convert::operator double()
{
	double result;

	if (this->_type.compare("float") == 0)
		return result = static_cast<double>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<double>(this->_doubleNum);
	if (this->_type.compare("int") == 0)
		return result = static_cast<double>(this->_intNum);
	else
		throw std::invalid_argument("impossible");
}

Convert::operator int()
{
	int result;

	if (this->_type.compare("float") == 0)
		return result = static_cast<int>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<int>(this->_doubleNum);
	if (this->_type.compare("int") == 0)
		return result = static_cast<int>(this->_intNum);
	else
		throw std::invalid_argument("impossible");
}

Convert::operator char()
{
	int result;

	if (this->_type.compare("float") == 0)
		return result = static_cast<char>(this->_floatNum);
	if (this->_type.compare("double") == 0)
		return result = static_cast<char>(this->_doubleNum);
	if (this->_type.compare("int") == 0)
		return result = static_cast<char>(this->_intNum);
	else
		throw std::invalid_argument("impossible");
}
Convert::~Convert()
{
}
