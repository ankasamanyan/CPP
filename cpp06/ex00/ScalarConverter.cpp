#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter()
// {
// }

// ScalarConverter::ScalarConverter(const ScalarConverter &copy)
// {

// }

// ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
// {

// }

// ScalarConverter::~ScalarConverter()
// {
// }

// static int	isNotPrintable(std::string str)
// {
// 	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
// 	{
//    		if (!std::isprint(*it))
//       		return (true);
//   	}
//  	return (false);
// }

static int	isJustChar(std::string str)
{
	std::string::const_iterator it = str.begin();
	if (isascii(*it))
		return (true);
	return (false);
}

static void	charCast(std::string input, double value)
{
	if (isJustChar(input))
	{
		if (value > 32 && value <= 126)
			std::cout << PURPLE << "char: " << GREEN << "'" << static_cast<char>(value) << "'" << RESET_LINE;
		else if (input.size() == 1)
			std::cout << PURPLE << "char: " << GREEN << "'" << input << "'" << RESET_LINE;
		else
			std::cout << PURPLE << "char: " << GREEN << "impossible" << RESET_LINE;
	}
}

static void	intCast(double value)
{
	if (value >= INT_MIN && value <= INT_MAX)
	{
		std::cout << PURPLE << "int: " << GREEN << static_cast<int>(value) << RESET_LINE;
	}
	else
		std::cout << PURPLE << "int: " << GREEN << "impossible" << RESET_LINE;
}

// static int	isJustInt(std::string str)
// {
// 	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
// 	{
//    		if (!std::isalnum(*it))
//       		return (true);
//   	}
//  	return (false);
// }


void	ScalarConverter::convert(std::string input)
{
	char	*stringy;
	double value;

	value = strtod(input.c_str(), &stringy);

	std::cout << PURPLE << "strngy: " << GREEN << "'" << stringy << "'" << RESET_LINE;
	std::cout << PURPLE << "value: " << GREEN << "'" << static_cast<int>(value) << "'" << RESET_LINE << RESET_LINE;

	charCast(input, value);
	intCast(value);
	// check_for_type();
	// print_it();
}

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}