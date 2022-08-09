#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	static const int numFructional;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(Fixed const &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif