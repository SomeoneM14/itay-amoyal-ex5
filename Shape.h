#pragma once
#include "Point.h"
#include "Canvas.h"
#include <string>

class Shape 
{
public:

	// Constructor
	Shape(std::string name, std::string type);

	// Destructor
	~Shape();

	// Getters
	std::string getType() const;
	std::string getName() const;

	// Methods
	virtual double getArea() const;
	virtual double getPerimeter() const=0 ;
	virtual void move(Point other)=0; // add the Point to all the points of shape
	void printDetails() ;

	virtual void draw(const Canvas& canvas) = 0;
	virtual void clearDraw(const Canvas& canvas) = 0;

private:
	std::string _name;
	std::string _type;
};