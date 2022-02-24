#include "Fixed.hpp"

// Признаки каноничной формы

Fixed::Fixed() : fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int param ) {
	// std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = param << this->numbFractBits;
}

Fixed::Fixed( const float param ) {
	// std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = (int)roundf(param * (1 << this->numbFractBits));
}
Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed &fixed)
{
	// std::cout << "Assignation operator called" << std::endl;
	if ( this == &fixed)
		return (*this);
	this->fixedPointValue = fixed.fixedPointValue;
		return (*this);
}

// Перегрузки операторов арифметических вычислений

Fixed	Fixed::operator+ ( const Fixed &fixed) const {
	Fixed result;

	result.fixedPointValue = this->fixedPointValue + fixed.fixedPointValue;
	return (result);
}

Fixed   Fixed::operator- ( const Fixed &fixed) const {
	Fixed result;

	result.fixedPointValue = this->fixedPointValue - fixed.fixedPointValue;
	return (result);
}

Fixed   Fixed::operator* (const Fixed &fixed) const {
	Fixed   result;

	result.fixedPointValue = this->fixedPointValue * fixed.fixedPointValue / (1 << numbFractBits);
	return (result);
}

Fixed   Fixed::operator/ (const Fixed &fixed) const {
	Fixed   result;

	result.fixedPointValue = this->fixedPointValue / fixed.fixedPointValue * (1 << numbFractBits);
	return (result);
}

// Перегрузки операторов сравнения

bool    Fixed::operator<( const Fixed &fixed) const {
	if (this->fixedPointValue < fixed.fixedPointValue)
		return (true);
	return (false);
}

bool    Fixed::operator>( const Fixed &fixed) const {
	if (this->fixedPointValue > fixed.fixedPointValue)
		return (true);
	return (false);
}

bool    Fixed::operator<=( const Fixed &fixed) const {
	if (this->fixedPointValue <= fixed.fixedPointValue)
		return (true);
	return (false);
}

bool    Fixed::operator>=(const Fixed &fixed) const {
	if (this->fixedPointValue >= fixed.fixedPointValue)
		return (true);
	return (false);
}

bool    Fixed::operator==(const Fixed &fixed) const {
	if (this->fixedPointValue == fixed.fixedPointValue)
		return (true);
	return (false);
}

bool    Fixed::operator!=(const Fixed &fixed) const {
	if (this->fixedPointValue != fixed.fixedPointValue)
		return (true);
	return (false);
}

// Префиксы

Fixed&  Fixed::operator++ () {
	this->fixedPointValue++;
	return (*this);
}

 Fixed&  Fixed::operator-- () {
	this->fixedPointValue--;
	return (*this);
}

// Постфиксы

Fixed   Fixed::operator++ (int) {
	Fixed tmp(this->toFloat());
	++(*this);
	return (tmp);
}

Fixed   Fixed::operator-- (int) {
	Fixed  tmp(this->toFloat());
	--(*this);
	return (tmp);
}


Fixed& Fixed::min( Fixed &a, Fixed &b ) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b ) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}


int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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

std::ostream&    operator<< (std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}
