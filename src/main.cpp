#include <iostream>
#include <string>

#include "functions.h"

int main(){
	std::cout << "\tTASK 25.1 MEDICAL OPERATION\n\n";

	std::cout << "Make an incision with a scalpel (Enter two different points)\n";
	Point p1, p2;
	std::cout << "The first point\n";
	p1.createPoint();
	std::cout << "The second point\n";
	p2.createPoint();

	while (p1 == p2)
	{
		std::cout << "The cut cannot be made at one point." << p1 << "\n";
		std::cout << "The second point\n";
		p2.createPoint();
	}

	std::string action;

	while (true)
	{
		std::cout << "\nEnter \"hemostat\" to make a clamp\n";
		std::cout << "Enter \"tweezers \" to use tweezers\n";
		std::cout << "Enter \"suture\" to stitch and end operation (the cut points must match the seam points)\n";
		action = myCin<decltype(action)>();

		if (action == "hemostat")
		{
			Point p;
			std::cout << "Enter clamp point\n";
			p.createPoint();
			hemostat(p);
		}
		else if (action == "tweezers")
		{
			Point p;
			std::cout << "Enter point for tweezers\n";
			p.createPoint();
			tweezers(p);
		}
		else if (action == "suture")
		{
			Point p3, p4;
			std::cout << "Enter two points to make a seam\n";
			std::cout << "The first point\n";
			p3.createPoint();
			std::cout << "The second point\n";
			p4.createPoint();

			suture(p3, p4);

			if ((p1 == p3 && p2 == p4) || (p2 == p3 && p1 == p4))
			{
				break;
			}
			else
			{
				std::cout << "The cut and seam do not match\n";
			}
		}
		else
		{
			std::cout << "You've entered something wrong. Try again\n";
		}
	}

	std::cout << "\nThe cut and seam match. Operation completed successfully!\n";




	return 0;
}