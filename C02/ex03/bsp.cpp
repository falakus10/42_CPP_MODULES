#include "Point.hpp"

float	find_area(Point const first, Point const second, Point const third)
{
	float x1 = first.get_point_x();
	float y1 = first.get_point_y();
	float x2 = second.get_point_x();
	float y2 = second.get_point_y();
	float x3 = third.get_point_x();
	float y3 = third.get_point_y();

	return (std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	area_ABP;
	float	area_ACP;
	float	area_BCP;
	float	area_ABC;

	area_ABC = find_area(a, b, c);
	area_ABP = find_area(a, b, point);
	area_ACP = find_area(a, c, point);
	area_BCP = find_area(b, c, point);

	if (area_ACP < 0.0001f || area_ABP < 0.0001f || area_BCP < 0.0001f)
		return (false);
	return (area_ABC == area_ABP + area_ACP + area_BCP);
}