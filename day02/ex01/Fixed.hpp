#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPoint;
	static const int numFructional;

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &other);

	Fixed &operator=(Fixed const &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif