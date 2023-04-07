#pragma once
#include <ostream>

struct Point
{
	double x;
	double y;

	bool operator==(const Point& p) const;
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
	void createPoint();
};