#include "Point.h"
#include <math.h>

Point::Point() // initialize values to 0
{
	_x=0;
	_y=0;
}
Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

// Destructor
Point::~Point()
{
	//nothing to free
}

// Operators
Point Point::operator+(const Point& other) const
{
	return  *(new Point(_x + other._x, _y + other._y));
}
Point& Point::operator+=(const Point& other)
{
	_x += other._x;
	_y += other._y;
	return *this;
}

// Getters
double Point::getX() const
{
	return _x;
}
double Point::getY() const
{
	return _y;
}

// Methods
double Point::distance(Point other) const
{
	return sqrt(pow(fabs(_x - other._x), 2) + pow(fabs(_y - other._y),2)); //math stuff
}