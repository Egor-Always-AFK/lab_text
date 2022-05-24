#ifndef POINT_HPP
# define POINT_HPP

#include <unistd.h>
#include <iostream>

class Point
{
private:
	int x_coord;
	int y_coord;
public:
	Point();
	Point(int x_coord, int y_coord);
	void setX(int x_coord);
	void setY(int y_coord);
	friend std::istream& operator >> (std::istream& in, Point& point);
	friend std::ostream& operator << (std::ostream& out, const Point& point);
};

#endif