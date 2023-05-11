#ifndef SCALAR_CONVERT_HPP
	#define SCALAR_CONVERT_HPP
#include <iostream>

class ScalarConverter
{
	private:

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);
		~ScalarConverter();
		/* member functions */
		convert();
};
