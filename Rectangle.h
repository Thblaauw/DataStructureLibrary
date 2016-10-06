#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

private:
	double length;
	double width;

public:
	Rectangle();
	Rectangle(double, double);

	void setLength(double);
	double getLength()const;

	void setWidth(double);
	double getWidth()const;

	void printRectangle();

	bool isEqual(const Rectangle&)const;

	double getArea()const;

	int compareTo(const Rectangle&)const;

	Rectangle* doubleRectangle(const Rectangle&);
};

#endif // !RECTANGLE_H
