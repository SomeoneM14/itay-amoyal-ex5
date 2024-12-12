#include "Rectangle.h"



myShapes::Rectangle::Rectangle(Point a, double length, double width, std::string type, std::string name) : Polygon(type, name)
{
	Point b(a.getX() + length, a.getY());
	Point c(a.getX()+length, a.getY()+width);
	Point d(a.getX(), a.getY()+width);
	_points.push_back(a);
	_points.push_back(b);
	_points.push_back(c);
	_points.push_back(d);
}

myShapes::Rectangle::~Rectangle()
{
	//nothing to free
}

double myShapes::Rectangle::getArea() const
{
	double sizeA = _points[0].distance(_points[1]);
	double sizeB = _points[1].distance(_points[2]);
	return sizeA * sizeB;
}

double myShapes::Rectangle::getPerimeter() const
{
	double sizeA = _points[0].distance(_points[1]);
	double sizeB = _points[1].distance(_points[2]);
	double perimeter = sizeA * 2 + sizeB * 2;
	return perimeter;
}

void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}

void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}


