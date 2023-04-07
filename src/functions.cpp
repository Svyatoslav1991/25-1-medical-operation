#include "functions.h"

//cutting
void scalpel(const Point& p1, const Point& p2) noexcept
{
	std::cout << "An incision was made between points " << p1 << " and " << p2 << "\n";
}

//*********************************************************************

//clamp
void hemostat(const Point& p) noexcept
{
	std::cout << "Made clamp at point " << p << "\n";
}

//*********************************************************************

//tweezers
void tweezers(const Point& p) noexcept
{
	std::cout << "Applied tweezers at point " << p << "\n";
}

//seam
void suture(const Point& p1, const Point& p2) noexcept
{
	std::cout << "A seam is made between points " << p1 << " and " << p2 << "\n";
}


//Checking double point numbers for equality
bool isEqual(double a, double b) noexcept
{
	return fabs(a - b) < 0.01;
}