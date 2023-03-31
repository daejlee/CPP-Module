#include "Point.hpp"

static float	det(Point const v1, Point const v2, Point const p)
{
	
	return ((v1.getX() - p.getX()) * (v2.getY() - p.getY()) - (v2.getX() - p.getX()) * (v1.getY() - p.getY()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	non_c, non_cc;
	float	d1, d2, d3;

	d1 = det(a, b, point);
	d2 = det(b, c, point);
	d3 = det(c, a, point);

	non_c = (d1 < 0 || d2 < 0 || d3 < 0);
	non_cc = (d1 > 0 || d2 > 0 || d3 > 0);

	return !(non_c && non_cc);
}
