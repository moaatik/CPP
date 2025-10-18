#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point& copy);
		Point& operator=(const Point& copy);
		~Point();

		const Fixed& getX(void) const;
		const Fixed& getY(void) const;
};
#endif
