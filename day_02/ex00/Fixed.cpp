#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if ( this == &fixed )
		return (*this);
	this->fixedPointValue= fixed.getRawBits();

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
