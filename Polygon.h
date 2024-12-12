#pragma once

#include "Shape.h"
#include "Point.h" 
#include <vector>

class Polygon : public Shape
{
public:

	// Constructor
	Polygon(std::string type, std::string name);

	// Destructor
	~Polygon();

	// Methods
	virtual double getArea() const=0;
	virtual double getPerimeter() const = 0;
	// Getters
	std::vector<Point> getPoints() const;

	void move(Point other) override;

protected:
	std::vector<Point> _points;
};