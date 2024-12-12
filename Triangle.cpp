#include "Triangle.h"
#include "Polygon.h"
#include <math.h>

Triangle::Triangle(Point a, Point b, Point c, std::string type, std::string name) : Polygon(type,name)
{
	_points.push_back(a);
	_points.push_back(b);
	_points.push_back(c);
}

Triangle::~Triangle()
{
	//nothing to free
}

double Triangle::getArea() const
{
	double sizeA=_points[0].distance(_points[1]);
	double sizeB = _points[1].distance(_points[2]);
	double sizeC = _points[2].distance(_points[0]);
	double S = (sizeA + sizeB + sizeC) / 2;//math
	double result = sqrt(S * (S - sizeA) * (S - sizeB) * (S - sizeC)); //Heron's formula
	return result;
}

double Triangle::getPerimeter() const
{
	double sizeA = _points[0].distance(_points[1]);
	double sizeB = _points[1].distance(_points[2]);
	double sizeC = _points[2].distance(_points[0]);
	return sizeA + sizeB + sizeC;
}

void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}
