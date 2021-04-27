#include "Point.h"
#include <iostream>

//rlm::Point operator + (rlm::Point& p1, rlm::Point& p2)
//{
//	rlm::Point p;
//	p.x = p1.x + p2.x;
//	p.y = p1.y + p2.y;
//
//	return p;
//}



int main()
{
	rlm::Point point1(4, 7);
	rlm::Point point2(12, 14);

	point2 + point1;
	rlm::Point point3 = point1 + point2;
	std::cout << point3 << point2 << point1;
	point3 = point3 - point1;
	std::cout << point3;
	point3 = point1 * 8;
	std::cout << point3;

	//if (point1 == point2) std::cout	

	//point2.add(point1);

	//point3.Write(std::cout);
}