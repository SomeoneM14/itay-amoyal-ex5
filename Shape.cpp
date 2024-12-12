#include "Shape.h"

Shape::Shape(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

// Destructor
Shape::~Shape()
{
	//nothing to free
}

// Getters
std::string Shape::getType() const
{
	return _type;
}
std::string Shape::getName() const
{
	return _name;
}

// Methods
double Shape::getArea() const
{
	return 0;
}

void Shape::printDetails()
{

}
void Shape::draw(const Canvas& canvas)
{

}
void Shape::clearDraw(const Canvas& canvas)
{

}
