#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(int const num)
{
	_raw = num << _bits;
}

Fixed::Fixed(float const num)
{
	_raw = roundf(num * (1 << _bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    _raw = copy._raw;
	return (*this);
}
// > < >= <= == !=
bool    Fixed::operator>(const Fixed &dieAndereNummer) const
{
	return(_raw > dieAndereNummer.getRawBits());
}

bool    Fixed::operator<(const Fixed &dieAndereNummer) const
{
	return(_raw < dieAndereNummer.getRawBits());
}

bool    Fixed::operator>=(const Fixed &dieAndereNummer) const
{
	return(_raw >= dieAndereNummer.getRawBits());
}

bool    Fixed::operator<=(const Fixed &dieAndereNummer) const
{
	return(_raw <= dieAndereNummer.getRawBits());
}

bool    Fixed::operator==(const Fixed &dieAndereNummer) const
{
	return(_raw == dieAndereNummer.getRawBits());
}

bool    Fixed::operator!=(const Fixed &dieAndereNummer) const
{
	return(_raw != dieAndereNummer.getRawBits());
}

// + = * /

Fixed   Fixed::operator+(const Fixed &dieAndereNummer) const
{
	return(Fixed(this->toFloat() + dieAndereNummer.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &dieAndereNummer) const
{
	return(Fixed(this->toFloat() - dieAndereNummer.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &dieAndereNummer) const
{
	return(Fixed(this->toFloat() * dieAndereNummer.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &dieAndereNummer) const
{
	return(Fixed(this->toFloat() / dieAndereNummer.toFloat()));
}

// ++/++ --/--

//pre incrementation
Fixed	&Fixed::operator++(void)
{
	this->_raw++;
	return(*this);
}

//post incrementation
Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	this->_raw++;
	return(temp);
}

//pre decrementation
Fixed	&Fixed::operator--(void)
{
	this->_raw--;
	return(*this);
}

//post decrementation
Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_raw--;
	return(temp);
}


float	Fixed::toFloat( void ) const
{
	return((float)(_raw) / (float)(1 << _bits));
}

int		Fixed::toInt( void ) const
{
	return(_raw >> _bits);
}

int Fixed::getRawBits( void ) const
{
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}


/* min */
Fixed  &Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second ? first : second);
}

const Fixed  &Fixed::min(const Fixed &first, const Fixed &second)
{
	return (first < second ? first : second);
}

/* max */
Fixed  &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second ? first : second);
}

const Fixed  &Fixed::max(const Fixed &first, const Fixed &second)
{
	return (first > second ? first : second);
}


std::ostream &operator<<(std::ostream &streamy, Fixed const &num)
{
	streamy << num.toFloat();
	return (streamy);
}

