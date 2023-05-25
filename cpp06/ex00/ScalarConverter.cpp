#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

/* Helper functions */

static int findChar(std::string input, char c)
{
	int amount = 0;
	for (std::string::const_iterator it = input.begin(); it != input.end(); ++it)
   		if (*it == c)
      		amount++;
	return (amount);
}

static int noGarbageInDouble(int c)
{
	if (!isnumber(c) && c != '.')
		return (false);
	return (true);
}

static int noGarbageInFloat(int c)
{
	if (!isnumber(c) && c != '.' && c != 'f')
		return (false);
	return (true);
}

static bool strIter(std::string stringy, int(*func)(int c))
{
	for (std::string::const_iterator it = stringy.begin(); it != stringy.end(); ++it)
	{
		if (!(*func)(*it))
			return(false);
	}
	return(true);
}

/* Pseudo literals */

static void ifPseudo(std::string input)
{
	if (input.compare("nan") == 0 || input.compare("+inf") == 0 || input.compare("-inf") == 0)
	{
		std::cout << PURPLE << "char:    " << GREEN << "impossible" << RESET_LINE;
		std::cout << PURPLE << "int:     " << GREEN << "impossible" << RESET_LINE;
		std::cout << PURPLE << "float:    " << GREEN << input << "f" << RESET_LINE;
		std::cout << PURPLE << "double:   " << GREEN << input << RESET_LINE;
		exit (0);
	}
}

/* Detecting the types */

static bool	detectChar(std::string input)
{
	if (input.size() == 1)
	{
		if (isascii(input[0]) && !isnumber(input[0]))
			return (true);
	}
	return (false);
}

static bool detectInt(std::string input)
{
	if(input[0] == '-' || input[0] == '+')
		input = input.substr(1);
	if (strIter(input, isnumber))
		return (true);
	return (false);
}

static bool detectFloat(std::string input)
{
	if(input[0] == '-' || input[0] == '+')
		input = input.substr(1);
	if ((findChar(input,'.') == 1 && (findChar(input,'f') == 1 && input[input.size()-1] == 'f') && strIter(input, noGarbageInFloat)))
	{
		if ((input[0] != '.' && input[input.size() - 1] != '.') && input[input.find('.') + 1] != 'f')
			return (true);
	}
	return(false);
}

static bool	detectDouble(std::string input)
{
	if(input[0] == '-' || input[0] == '+')
		input = input.substr(1);
	if (findChar(input,'.') == 1 && strIter(input, noGarbageInDouble))
	{
		if (input[0] != '.' && input[input.size() - 1] != '.')
			return (true);
	}
	return (false);
}

/* Validating the input type */

static int isValidType(std::string input)
{
	if (input.size() == 0)
		return (INVALID);
	if (detectChar(input))
		return (CHAR);
	if (detectInt(input))
		return (INT);
	if (detectFloat(input))
		return (FLOAT);
	if (detectDouble(input))
		return (DOUBLE);
	return (INVALID);
}

/* Type casting */

static void	charCast(std::string input, double value)
{
	if (isValidType(input) == CHAR) 
		std::cout << PURPLE << "char:    " << GREEN << "'" << static_cast<char>(input[0]) << "'" << RESET_LINE;
	else if (value > 32 && value <= 126)
			std::cout << PURPLE << "char:    " << GREEN << "'" << static_cast<char>(value) << "'" << RESET_LINE;
	else
		std::cout << PURPLE << "char:    " << GREEN << "non displayable" << RESET_LINE;
}

static void	intCast(std::string input, double value)
{
	if (detectChar(input) == CHAR)
		std::cout << PURPLE << "int:      " << GREEN << static_cast<int>(input[0]) << RESET_LINE;
	else if (value >= INT_MIN && value <= INT_MAX)
		std::cout << PURPLE << "int:      " << GREEN << static_cast<int>(value) << RESET_LINE;
	else
		std::cout << PURPLE << "int:      " << GREEN << "impossible" << RESET_LINE;
}

static void	floatCast(std::string input, double value)
{

	if (isValidType(input) == FLOAT)
		std::cout << PURPLE << "float:    " << GREEN << input << RESET_LINE;
	else if (isValidType(input) == DOUBLE)
		std::cout << PURPLE << "float:    " << GREEN << input << "f" << RESET_LINE;
	else if (isValidType(input) == INT)
		std::cout << PURPLE << "float:    " << GREEN << value << ".0f" << RESET_LINE;
	else if (isValidType(input) == CHAR)
		std::cout << PURPLE << "float:    " << GREEN << static_cast<int>(input[0]) << ".0f" << RESET_LINE;
	else
		std::cout << PURPLE << "float:    " << GREEN << "impossible" << RESET_LINE;
}

static void	doubleCast(std::string input, double value)
{
	if (isValidType(input) == INT)
		std::cout << PURPLE << "double:   " << GREEN << value << ".0" << RESET_LINE;
	else if (isValidType(input) == DOUBLE)
		std::cout << PURPLE << "double:   " << GREEN << input << RESET_LINE;
	else if (isValidType(input) == FLOAT)
		std::cout << PURPLE << "double:   " << GREEN << input.substr(0, input.size() - 1) << RESET_LINE;
	else if (isValidType(input) == CHAR)
		std::cout << PURPLE << "double:   " << GREEN << static_cast<int>(input[0]) << ".0" << RESET_LINE;
	else
		std::cout << PURPLE << "double:   " << GREEN << "impossible" << RESET_LINE;
}

void	ScalarConverter::convert(std::string input)
{
	char	*stringy;
	double	value;

	ifPseudo(input);
	if (isValidType(input) == INVALID)
		return(printMsg("INVALID INPUT", PINK));
	value = strtod(input.c_str(), &stringy);
	charCast(input, value);
	intCast(input, value);
	floatCast(input, value);
	doubleCast(input, value);

}

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}