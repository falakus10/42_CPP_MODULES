#include "Fixed.hpp"

Fixed:: Fixed() : fp_value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed :: Fixed(const int i_number)
{
    std::cout << "Int constructor called" << std::endl;
    fp_value = (i_number << fractional_bits);
}

Fixed :: Fixed(const float f_number)
{
    std::cout << "Float constructor called" << std::endl;
    fp_value = static_cast<int>(roundf(f_number * (1 << fractional_bits)));
}

Fixed:: Fixed(const Fixed &next)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fp_value = next.getRawBits();
}

Fixed &Fixed:: operator=(const Fixed &next)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &next)
        this->fp_value = next.getRawBits();
    return (*this);
}

Fixed:: ~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed:: getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp_value); 
}

void Fixed:: setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fp_value = raw;
}

float Fixed :: toFloat(void) const
{
    return (static_cast<float>(fp_value) / (1 << fractional_bits));
}

int Fixed :: toInt(void) const
{
    return (static_cast<int>(fp_value) / (1 << fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
    os << f.toFloat();
    return (os);
}

bool Fixed :: operator>(const Fixed &next) const
{
    return (this->toFloat() > next.toFloat());
}

bool Fixed :: operator<(const Fixed &next) const
{
    return (this->toFloat() < next.toFloat());
}

bool Fixed :: operator>=(const Fixed &next) const
{
    return (this->toFloat() >= next.toFloat());
}

bool Fixed :: operator<=(const Fixed &next) const
{
    return (this->toFloat() <= next.toFloat());
}

bool Fixed :: operator==(const Fixed &next) const
{
    return (this->toFloat() == next.toFloat());
}

bool Fixed :: operator!=(const Fixed &next) const
{
    return (this->toFloat() != next.toFloat());
}

Fixed Fixed :: operator+(const Fixed &next) const
{
    return (this->toFloat() + next.toFloat());
}

Fixed Fixed :: operator-(const Fixed &next) const
{
    return (this->toFloat() - next.toFloat());
}

Fixed Fixed :: operator*(const Fixed &next) const
{
    return (this->toFloat() * next.toFloat());
}

Fixed Fixed :: operator/(const Fixed &next) const
{
    return (this->toFloat() / next.toFloat());
}

Fixed Fixed :: operator++(int)
{
    Fixed (old_value);

    old_value.fp_value = this->fp_value;
    this->fp_value++;
    return (old_value);
}

Fixed Fixed :: operator--(int)
{
    Fixed (old_value);

    old_value.fp_value = this->fp_value;
    this->fp_value--;
    return (old_value);
}

Fixed &Fixed :: operator++()
{
    this->fp_value++;
    return (*this);
}

Fixed &Fixed :: operator--()
{
    this->fp_value--;
    return (*this);
}

const Fixed &Fixed :: min(const Fixed &first, const Fixed &second)
{
    if (first.toFloat() > second.toFloat())
        return (second);
    return (first);
}

const Fixed &Fixed :: max(const Fixed &first, const Fixed &second)
{
    if (first.toFloat() > second.toFloat())
        return (first);
    return (second); 
}

Fixed &Fixed :: min(Fixed &first, Fixed &second)
{
    if (first.toFloat() > second.toFloat())
        return (second);
    return (first);
}

Fixed &Fixed :: max(Fixed &first, Fixed &second)
{
    if (first.toFloat() > second.toFloat())
        return (first);
    return (second);
}

