#ifndef FIXED_HPP
    #define FIXED_HPP
#include <iostream>
#include "Colours.h"

class Fixed
{
    private:
        int					_raw;
		static const int	_bits = 8;

    public:
        Fixed();
        Fixed(Fixed &copy); //copy constructor
        ~Fixed();
	public:
		Fixed	&operator=(Fixed &copy);
		int 	getRawBits( void ) const;
		void	setRawBits(int raw);
};

#endif