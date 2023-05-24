#ifndef SCALAR_CONVERT_HPP
	#define SCALAR_CONVERT_HPP
#include <iostream>
#include "Colours.h"
#include <cstdlib>
#include <cmath>

#define INVALID		0
#define CHAR		1
#define INT			2
#define FLOAT		3
#define DOUBLE		4

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