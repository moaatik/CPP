#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(4, 1);
	Point b(2, 6);
	Point c(7, 6);

	Point point(4, 4);
	if (bsp(a, b , c, point))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;
}
