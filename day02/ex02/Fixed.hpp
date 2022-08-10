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

	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed &operator++();
	Fixed &operator--();

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &max(Fixed &other1, Fixed &other2);
	static const Fixed &max(Fixed const &other1, Fixed const &other2);

	static Fixed &min(Fixed &other1, Fixed &other2);
	static const Fixed &min(Fixed const &other1, Fixed const &other2);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif