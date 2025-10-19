#include "Point.hpp"

// The formula: Area = ∣(B−A)×(C−A)∣ / 2
// (B-A) = (Bx - Ax, By-Ay)
// we have 1 (B-A) and 2 (C-A)
// (x1, y1) × (x2, y2) = x1 * y2 − y1 * x2

Fixed	get_area(Point const &a, Point const &b, Point const &c)
{
	Fixed x1 = b.getX() - a.getX();
	Fixed y1 = b.getY() - a.getY();
	Fixed x2 = c.getX() - a.getX();
	Fixed y2 = c.getY() - a.getY();

	Fixed area = x1 * y2 - y1 * x2;

	if (area < Fixed(0))
		area = area * Fixed(-1);

	return area / Fixed(2);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	Fixed ABC = get_area(a, b, c);

	Fixed PBC = get_area(point, b, c);
	Fixed APC = get_area(a, point, c);
	Fixed ABP = get_area(a, b, point);

	if (PBC == Fixed(0) || APC == Fixed(0) || ABP == Fixed(0) || (PBC + APC + ABP) > ABC)
		return (false);
	return (true);
}
