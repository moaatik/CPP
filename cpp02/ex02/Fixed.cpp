#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = copy.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = copy.fixed_point;
	return (*this);
}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const int number) : fixed_point(number << fractional_bits) {}

Fixed::Fixed(const float number) : fixed_point(static_cast<int> (roundf(number * (1U << fractional_bits)))) {}

float Fixed::toFloat( void ) const {return static_cast<float>(fixed_point) / (1U << fractional_bits);}

int	Fixed::toInt(void) const {return fixed_point >> fractional_bits;}

std::ostream&	operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

bool 	Fixed::operator>(const Fixed& other) const {return fixed_point > other.fixed_point;}
bool 	Fixed::operator<(const Fixed& other) const {return fixed_point < other.fixed_point;}
bool 	Fixed::operator>=(const Fixed& other) const {return fixed_point >= other.fixed_point;}
bool 	Fixed::operator<=(const Fixed& other) const {return fixed_point <= other.fixed_point;}
bool 	Fixed::operator==(const Fixed& other) const {return fixed_point == other.fixed_point;}
bool 	Fixed::operator!=(const Fixed& other) const {return fixed_point != other.fixed_point;}

Fixed	Fixed::operator+(const Fixed& other) const {return Fixed(toFloat() + other.toFloat());}
Fixed	Fixed::operator-(const Fixed& other) const {return Fixed(toFloat() - other.toFloat());}
Fixed	Fixed::operator*(const Fixed& other) const {return Fixed(toFloat() * other.toFloat());}
Fixed	Fixed::operator/(const Fixed& other) const {return Fixed(toFloat() / other.toFloat());}

Fixed&	Fixed::operator++(void) {fixed_point++; return *this;}
Fixed	Fixed::operator++(int) {Fixed temp = *this ;fixed_point++; return temp;}
Fixed&	Fixed::operator--(void) {fixed_point--; return *this;}
Fixed	Fixed::operator--(int) {Fixed temp = *this ;fixed_point--; return temp;}

Fixed& Fixed::min(Fixed& fixed_1, Fixed& fixed_2)
{
	if (fixed_1 < fixed_2)
		return fixed_1;
	return fixed_2;
}

const Fixed& Fixed::min(const Fixed& fixed_1, const Fixed& fixed_2)
{
	if (fixed_1 < fixed_2)
		return fixed_1;
	return fixed_2;
}

Fixed& Fixed::max(Fixed& fixed_1, Fixed& fixed_2)
{
	if (fixed_1 > fixed_2)
		return fixed_1;
	return fixed_2;
}

const Fixed& Fixed::max(const Fixed& fixed_1, const Fixed& fixed_2)
{
	if (fixed_1 > fixed_2)
		return fixed_1;
	return fixed_2;
}
