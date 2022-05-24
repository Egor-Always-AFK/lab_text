#include "../includes/point.hpp"

Point::Point()
{
	setX(0);
	setY(0);
}

Point::Point(int x_coord, int y_coord)
{
	setX(x_coord);
	setY(y_coord);
}

void Point::setX(int x_coord)
{
	this->x_coord = x_coord;
}

void Point::setY(int y_coord)
{
	this->y_coord = y_coord;
}

std::ostream& operator << (std::ostream& out, const Point& point)
{
	std::cout << "Angle coordinates:\nx = " << point.x_coord << "\ny = " << point.y_coord;
	return out;
}

std::istream& operator >> (std::istream& in, Point& point)
{
	std::cout << "Enter coordinate:\nx = ";
	int x = 0;
	std::cin >> x;
	std::cout << "y = ";
	int y = 0;
	std::cin >> y;
	point.setX(x);
	point.setY(y);

	return in;
}