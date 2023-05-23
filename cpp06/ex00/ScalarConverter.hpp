#ifndef SCALAR_CONVERT_HPP
	#define SCALAR_CONVERT_HPP
#include <iostream>
#include "Colours.h"
#include <cstdlib>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);
		~ScalarConverter();

	public:
		static void	convert(std::string input);
};

#endif