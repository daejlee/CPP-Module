#include "Point.hpp"

Point::	Point(void) : x(0), y(0){}

Point::	Point(const float inputX, const float inputY) : x(inputX), y(inputY){}

Point::	Point(const Point &a) : x(a.x), y(a.y){}

Point&	Point::operator= (const Point &a)
{
	(void)a;
	return (*this);
}

Point::	~Point(void){}

float	Point::getX(void) const
{
	return (x.toFloat());
}

float	Point::getY(void) const
{
	return (y.toFloat());
}

std::ostream& operator<< (std::ostream& out, const Point& Point){
	out << "(" << Point.getX() << ", " << Point.getY() << ")";
	return (out);
}
