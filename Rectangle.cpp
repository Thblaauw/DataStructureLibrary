#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double len, double wid) {
	length = len;
	width = wid;
}

void Rectangle::setLength(double len) {
	length = len;
}
double Rectangle::getLength()const{
	return length;
}

void Rectangle::setWidth(double wid) {
	width = wid;
}
double Rectangle::getWidth()const{
	return width;
}

Rectangle* Rectangle::doubleRectangle(const Rectangle& r) {
	double newLength = r.getLength() + length;
	double newWidth = r.getWidth() + width;

	return new Rectangle(newLength, newWidth);
}

void Rectangle::printRectangle() {
	std::cout << "length: " << length << std::endl 
		<< "width: " << width << std::endl;
}

bool Rectangle::isEqual(const Rectangle& r) const{
	
	if (this->length == r.getLength() && this->width == r.getWidth())
		return true;

	return false;
}

double Rectangle::getArea() const{
	return (length * width);
}

int Rectangle::compareTo(const Rectangle& r)const {
	if (this->isEqual(r))
		return 0;

	else if(this->getArea() > r.getArea())
}

#endif