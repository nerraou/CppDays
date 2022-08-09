#include "Fixed.hpp"

const int Fixed::numFructional = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = num << this->numFructional;
}

Fixed::Fixed(const float num)
{
	std::cout << "FLoat constructor called" << std::endl;
	this->fixedPoint = roundf(num * (1 << this->numFructional));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fixedPoint = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &ostr, Fixed const &instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->fixedPoint / (1 << this->numFructional));
}

int Fixed::toInt() const
{
	return ((int)this->fixedPoint >> this->numFructional);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
