#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Fixed a(5);
    Fixed b(6);
    Point first(a, b);
    std::cout << a << std::endl;
    return (0);
}