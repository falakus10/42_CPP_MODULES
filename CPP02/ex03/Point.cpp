#include "Point.hpp"

Point :: Point() : x(0), y(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Point :: Point(const Fixed a, const Fixed b) : x(a), y(b)
{
    //std::cout << "Initilazer constructor called" << std::endl;
}
Point :: Point (const Point &next) : x(next.x), y(next.y)
{
    //std::cout << "Copy constructor called." << std::endl;
}

Point &Point :: operator=(const Point &next)
{
    (void)next;
    //std::cout << "Copy assigment operator called." << std::endl;
    return (*this);
}

Point :: ~Point()
{
    //std::cout << "Destructor called" << std::endl;
}

float Point :: get_point_x() const
{
    return (x.toFloat());
}

float Point :: get_point_y() const
{
    return (y.toFloat());
}
