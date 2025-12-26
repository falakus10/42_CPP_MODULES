#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    bool    answer;
    Point a(0.0f, 0.0f);
    Point b(0.0f, 15.0f);
    Point c(15.0f, 0.0f);
    Point point(1.0f, 2.0f);
    
    answer = bsp(a, b, c, point);
    if (answer)
        std::cout << "True" <<std::endl;
    else
        std::cout << "False" << std::endl;
    return (0);
}