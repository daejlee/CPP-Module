#include "Point.hpp"

Point::	Point(void)
{
	x.setRawBits(0);
	y.setRawBits(0);
}

Point::	Point(const float inputX, const float inputY)
{
	Fixed	tempX(inputX);
	Fixed	tempY(inputY);

	x = tempX;
	y = tempY;
}

Point::	Point(const Point &a)
{
	x = a.x;
	y = a.y;
}

Point&	Point::operator= (const Point &a)
{
	x = a.x;
	y = a.y;
	return (*this);
}

Point::	~Point(void){}

void	Point::setX(const float inputX)
{
	Fixed	tempX(inputX);
	x = tempX;
}

void	Point::setY(const float inputY)
{
	Fixed	tempY(inputY);
	y = tempY;
}

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
