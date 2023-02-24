#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << GREEN << "Default constructor called" << RESET_LINE;
}

Fixed::~Fixed()
{
	std::cout << PURPLE << "Destructor called" << RESET_LINE;
}

Fixed &Fixed::operator=(Fixed &copy)
{
    std::cout << PINK << "Copy assignment operator called" << RESET_LINE;
    _raw = copy._raw;
	return (*this);
}

 Fixed::Fixed(Fixed &copy)
 {
    *this = copy;
    std::cout << YELLOW << "Copy constructor called" << RESET_LINE;
 }

int Fixed::getRawBits( void ) const
{
	std::cout << SKY << "getRawBits member function called" << RESET_LINE;
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
	std::cout << "setRawBits member function called" << RESET_LINE;
}