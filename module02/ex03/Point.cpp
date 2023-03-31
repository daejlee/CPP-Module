#include "Point.hpp"

Point::	Point(void)
{}

Point::	Point(const float inputX, const float inputY)
{}

Point::	Point(const Point &a)
{}

Point&	Point::operator= (const Point &a)
{
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
