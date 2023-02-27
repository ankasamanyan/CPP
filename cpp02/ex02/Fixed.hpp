#ifndef FIXED_HPP
    #define FIXED_HPP
#include <iostream>
#include <cmath>
#include "Colours.h"

class Fixed
{
    private:

        int					_raw;
		static const int	_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &copy); //copy constructor
        Fixed(int const num);
        Fixed(float const num);
        ~Fixed();
    public:
        Fixed   &operator=(const Fixed &copy);
        /* */
        bool    operator>(const Fixed &dieAndereNummer) const;
        bool    operator<(const Fixed &dieAndereNummer) const;
        bool    operator>=(const Fixed &dieAndereNummer) const;
        bool    operator<=(const Fixed &dieAndereNummer) const;
        bool    operator==(const Fixed &dieAndereNummer) const;
        bool    operator!=(const Fixed &dieAndereNummer) const;
        /* */
        Fixed   operator+(const Fixed &dieAndereNummer) const;
        Fixed   operator-(const Fixed &dieAndereNummer) const;
        Fixed   operator*(const Fixed &dieAndereNummer) const;
        Fixed   operator/(const Fixed &dieAndereNummer) const;
        /* */
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);

	public:
		float	toFloat( void ) const;
		int		toInt( void ) const;
        int     getRawBits( void ) const;
        void	setRawBits(int const raw);
    /* min */
        static Fixed  &min(Fixed &first, Fixed &second);
        static const Fixed  &min(const Fixed &first, const Fixed &second);
    /* max */
        static Fixed  &max(Fixed &first, Fixed &second);
        static const Fixed  &max(const Fixed &first, const Fixed &second);


};

std::ostream &operator<<(std::ostream &streamy, Fixed const &num);

#endif