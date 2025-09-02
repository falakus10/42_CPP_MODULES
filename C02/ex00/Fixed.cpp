#include "Fixed.hpp"

Fixed:: Fixed() : fp_value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fp_value = other.getRawBits();
}

Fixed &Fixed:: operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fp_value = other.getRawBits();
    return (*this);
}

Fixed:: ~Fixed() {}

int Fixed:: getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_value); 
}

void Fixed:: setRawBits(int const raw)
{
    this->fp_value = raw;
}