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
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

    std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif