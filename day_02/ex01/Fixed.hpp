#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int fixedPointValue;
    static const int numbFractBits = 8;
public:
    Fixed();
    Fixed( const Fixed &fixed );
    Fixed( const int param );
    Fixed( const float param );
    ~Fixed();

    Fixed& operator= (const Fixed &fixed);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &fixed);

#endif