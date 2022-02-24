#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
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

    Fixed   operator+ ( const Fixed &fixed) const;
    Fixed   operator- ( const Fixed &fixed) const;
    Fixed   operator* (const Fixed &fixed) const;
    Fixed   operator/ (const Fixed &fixed) const;

    bool    operator<( const Fixed &fixed) const;
    bool    operator>( const Fixed &fixed) const;
    bool    operator<=( const Fixed &fixed) const;
    bool    operator>=(const Fixed &fixed) const;
    bool    operator==(const Fixed &fixed) const;
    bool    operator!=(const Fixed &fixed) const;

    // префиксы
    Fixed&  operator++ ();
    Fixed&  operator-- ();

    //постфиксы
    Fixed   operator++ (int);
    Fixed   operator-- (int);

    static Fixed& min(Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b);

    static Fixed& max(Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<< (std::ostream &output, const Fixed &fixed);

#endif