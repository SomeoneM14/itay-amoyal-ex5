#include "Polygon.h"

Polygon::Polygon(std::string type, std::string name) : Shape(name, type)
{

}

// Destructor
Polygon::~Polygon()
{
	//nothing to clear
}

// Methods

// Getters
std::vector<Point> Polygon::getPoints() const
{
	return _points;
}

void Polygon::move(Point other)
{
	for (int i = 0; i < _points.size(); i++)
	{
		_points[i] += other;
	}
}


