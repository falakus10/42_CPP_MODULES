#include "Point.hpp"

Point :: Point() : x(0), y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point :: Point(const Fixed a, const Fixed b) : x(a), y(b)
{
    std::cout << "Initilazer constructor called" << std::endl;
}
Point :: Point (const Point &next){}

Point :: ~Point()
{
    std::cout << "Destructor called" << std::endl;
}

