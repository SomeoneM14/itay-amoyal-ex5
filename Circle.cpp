#include "Circle.h"
#define PI 3.14



void Circle::draw(const Canvas& canvas)
{
	canvas.draw_circle(getCenter(), getRadius());
}

void Circle::clearDraw(const Canvas& canvas)
{
	canvas.clear_circle(getCenter(), getRadius());
}


Circle::Circle(Point center, double radius, std::string type, std::string name) : Shape(name,type)
{
	_center = center;
	_radius = radius;
}

// Destructor
Circle::~Circle()
{
	//nothing to free
}

// Getters
Point Circle::getCenter() const
{
	return _center;
}
double Circle::getRadius() const
{
	return _radius;
}

void Circle::move(Point other)
{
	_center += other;
}

double Circle::getArea() const
{
	return PI*_radius*_radius;
}

double Circle::getPerimeter() const
{
	return PI*_radius*2;
}

