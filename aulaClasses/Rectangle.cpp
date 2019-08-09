#include "Rectangle.h"

Rectangle::Rectangle()
{
	x = y = width = height = 0;
}

Rectangle::Rectangle(double x, double y, double w, double h)
{
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

Rectangle::~Rectangle()
{
	//
}

double Rectangle::CalculateArea()
{
	return width * height;
}

double Rectangle::CalculatePerimeter()
{
	return 2 * width + 2 * height;
}

double Rectangle::getX()
{
	return x;
}

void Rectangle::setX(double x)
{
	this->x = x;
}

double Rectangle::getY()
{
	return y;
}

void Rectangle::setY(double y)
{
	this->y = y;
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::getHeight()
{
	return height;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}
