#include "point.h"
#include "functions.h"

bool Point::operator==(const Point& p) const
{
	return isEqual(x, p.x) && isEqual(y, p.y);
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}

void Point::createPoint()
{
	std::cout << "x coordinate\n";
	x = myCin<decltype(x)>();

	std::cout << "y coordinate\n";
	y = myCin<decltype(y)>();
}