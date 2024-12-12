#include "Arrow.h"
#include "Point.h"

void Arrow::move(Point other)
{
	_source += other;
	_destination += other;
}

void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}

// Constructor
Arrow::Arrow(Point a, Point b, std::string type, std::string name) : Shape(name,type)
{
	if (a.getX() == b.getX() && a.getY()==b.getY())exit(1);
	_source = a;
	_destination = b;
}

// Destructor
Arrow::~Arrow()
{
	//nothing to free
}

// Getters
Point Arrow::getSource() const
{
	return _source;
}
Point Arrow::getDestination() const
{
	return _destination;
}

double Arrow::getPerimeter() const
{
	return _destination.distance(_source);
}
