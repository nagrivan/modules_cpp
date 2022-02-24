#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int param ) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = param << this->numbFractBits;
}

Fixed::Fixed( const float param ) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = (int)roundf(param * (1 << this->numbFractBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if ( this == &fixed)
		return (*this);
	this->fixedPointValue = fixed.fixedPointValue;

    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void    Fixed::setRawBits( int const raw )
{
    this->fixedPointValue = raw;
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->fixedPointValue / (1 << this->numbFractBits));
}

int Fixed::toInt( void ) const
{
    return (this->fixedPointValue >> this->numbFractBits);
}

std::ostream&    operator<< (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
