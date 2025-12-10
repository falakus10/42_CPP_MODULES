#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fp_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const int i_number);
        Fixed(const float f_number);
        Fixed(const Fixed &next);
        Fixed &operator=(const Fixed &next);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        bool operator>(const Fixed &next) const;
        bool operator<(const Fixed &next) const;
        bool operator>=(const Fixed &next) const;
        bool operator<=(const Fixed &next) const;
        bool operator==(const Fixed &next) const;
        bool operator!=(const Fixed &next) const;
        Fixed operator+(const Fixed &next) const;
        Fixed operator-(const Fixed &next) const;
        Fixed operator*(const Fixed &next) const;
        Fixed operator/(const Fixed &next) const;
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static const Fixed &min(const Fixed &first, const Fixed &second);
        static const Fixed &max(const Fixed &first, const Fixed &second);
        static Fixed &min(Fixed &first, Fixed &second);
        static Fixed &max(Fixed &first, Fixed &second);
};

    std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif