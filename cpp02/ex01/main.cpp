#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << GREEN << " as integer" << RESET << std::endl;
	std::cout << "b is " << b.toInt() << GREEN << " as integer" << RESET << std::endl;
	std::cout << "c is " << c.toInt() << GREEN << " as integer" << RESET << std::endl;
	std::cout << "d is " << d.toInt() << GREEN << " as integer" << RESET << std::endl;
	return 0;
}
