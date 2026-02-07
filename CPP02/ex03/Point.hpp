#ifndef POINT_HPP
# define POINT_HPP


#include "Fixed.hpp"
class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Fixed a, const Fixed b);
        Point (const Point &next);
        Point &operator=(const Point &next);
        ~Point();

        float get_point_x() const;
        float get_point_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif