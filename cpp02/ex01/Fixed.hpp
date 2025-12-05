#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
  private:
	int				 fixed_point;
	static const int fractional_bits;

  public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int number);
	Fixed(const float number);
	Fixed &operator=(const Fixed &copy);
	int	   getRawBits(void) const;
	void   setRawBits(int const raw);
	int	   toInt(void) const;
	float  toFloat(void) const;
	~Fixed(void);
};
std::ostream &operator<<(std::ostream &os, const Fixed &other);
#endif
