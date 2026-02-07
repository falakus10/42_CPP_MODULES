#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>

class Fixed
{
    private:
        int fp_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &next);
        Fixed &operator=(const Fixed &next);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif