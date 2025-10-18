#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(float x, float y): x(x), y(y) {}

Point::Point(const Point& copy): x(copy.x), y(copy.y) {}

Point::~Point() {}

Point& Point::operator=(const Point& copy) {(void)copy;return (*this);}

const Fixed& Point::getX() const {return x;}
const Fixed& Point::getY() const {return y;}
