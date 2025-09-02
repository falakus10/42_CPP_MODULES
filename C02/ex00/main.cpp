#include "Fixed.hpp"

int main( void )
{


    /*
    
    BİR ŞEY HATALLLLLLLLLLLLIIIIIIIIIIIIIIIIIIIIII
    
    */
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}