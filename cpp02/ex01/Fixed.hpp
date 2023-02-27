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
        Fixed (int const num);
        Fixed(float const num);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();
	public:
		float	toFloat( void ) const;
		int		toInt( void ) const;
        int     getRawBits( void ) const;
        void	setRawBits(int const raw);


};

std::ostream &operator<<(std::ostream &streamy, Fixed const &num);

#endif