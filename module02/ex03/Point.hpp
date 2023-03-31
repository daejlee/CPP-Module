#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
				Point(void);
				Point(const float inputX, const float inputY);
				Point(const Point &a);
	Point		&operator= (const Point &a);
				~Point(void);
	float		getX(void) const;
	float		getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream& operator<< (std::ostream& out, const Point& Point);

#endif