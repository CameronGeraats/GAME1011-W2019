#pragma once
class Rectangle
{
private:
	double length;
	double width;
public:
	bool setLength(double);
	bool setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
};

