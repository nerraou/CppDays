#include "Fixed.hpp"

const int Fixed::numFructional = 8;

Fixed::Fixed() : fixedPoint(0)
{
}

Fixed::Fixed(const int num)
{
	this->fixedPoint = num << this->numFructional;
}

Fixed::Fixed(const float num)
{
	this->fixedPoint = roundf(num * (1 << this->numFructional));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->fixedPoint = other.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->fixedPoint > other.fixedPoint);
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->fixedPoint >= other.fixedPoint);
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->fixedPoint < other.fixedPoint);
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->fixedPoint <= other.fixedPoint);
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->fixedPoint == other.fixedPoint);
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->fixedPoint != other.fixedPoint);
}

Fixed &Fixed::operator++()
{
	++this->fixedPoint;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--this->fixedPoint;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->fixedPoint;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->fixedPoint;
	return (tmp);
}

Fixed Fixed::operator+(Fixed const &other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other)
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other)
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other)
{
	return Fixed(this->toFloat() / other.toFloat());
}
std::ostream &operator<<(std::ostream &ostr, Fixed const &instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

Fixed &Fixed::max(Fixed &other1, Fixed &other2)
{
	return other1 > other2 ? other1 : other2;
}

const Fixed &Fixed::max(Fixed const &other1, Fixed const &other2)
{
	return other1 > other2 ? other1 : other2;
}

Fixed &Fixed::min(Fixed &other1, Fixed &other2)
{
	return other1 < other2 ? other1 : other2;
}

const Fixed &Fixed::min(Fixed const &other1, Fixed const &other2)
{
	return other1 < other2 ? other1 : other2;
}

int Fixed::getRawBits(void) const
{
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
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
}
