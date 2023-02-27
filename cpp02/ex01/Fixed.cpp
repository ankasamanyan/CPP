#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << GREEN << "Default constructor called" << RESET_LINE;
}

Fixed::Fixed(int const num)
{
	_raw = num << _bits;
	std::cout << SKY << "Int constructor called" << RESET_LINE;
}

Fixed::Fixed(float const num)
{
	_raw = roundf(num * (1 << _bits));
	std::cout << SKY << "Float constructor called" << RESET_LINE;
}

Fixed::~Fixed()
{
	std::cout << PURPLE << "Destructor called" << RESET_LINE;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    _raw = copy._raw;
	std::cout << PINK << "Copy assignment operator called" << RESET_LINE;
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
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

int		Fixed::toInt( void ) const
{
	return(_raw >> _bits);
}


float	Fixed::toFloat( void ) const
{
	return((float)(_raw) / (float)(1 << _bits));
}

std::ostream &operator<<(std::ostream &streamy, Fixed const &num)
{
	streamy << num.toFloat();
	return (streamy);
}
