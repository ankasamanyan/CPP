#include "RPN.hpp"

// You must create a program with these constraints:

// • The program name is RPN.

// • Your program must take an inverted Polish mathematical expression as an argument.

// • The numbers used in this operation and passed as arguments will always be less 
// than 10. The calculation itself but also the result do not take into account this rule.

// • Your program must process this expression and output the correct result on the 
// standard output.

// • If an error occurs during the execution of the program an error message 
// should be displayed on the standard output.

// • Your program must be able to handle operations with these tokens: "+ - / *".


// RPN::RPN(char **argv, int argc)
// {
// 	for (int i = 0; i < count; i++)
// 	{
// 		/* code */
// 	}
	
	
// }


bool	is_sign(char element)
{
	if (element == '+' || element == '-' || element == '/' || element == '*')
		return (true);
	return (false);
}

bool	notSingularDigit(std::string stringy, std::string::iterator iter)
{
	if (isdigit(*iter) && *(iter + 1) && isdigit(*(iter + 1)))
		return (true);
}

bool	inValidInput(std::string stringy)
{
	int	digitCount = 0;
	int	signCount = 0;

	if (is_sign(stringy[0]) || is_sign(stringy[1]))
		return (true);
	for (std::string::iterator iter = stringy.begin(); iter != stringy.end(); iter++)
	{
		if (isdigit(*iter) && *(iter + 1) && isdigit(*(iter + 1)))
			return (true);
		if (!isdigit(*iter) && !is_sign(*iter) && !(*iter == ' '))
			return (true);
		if (isdigit(*iter))
			digitCount++;
		if (is_sign(*iter))
			signCount++;
		if (digitCount - signCount != 1)
			return (true);
	}
	
	// if (argv)
	// {
	// 	for (int i = 1; i < argc; i++)
	// 	{
	// 		if (strlen(argv[i]) != 1)
	// 			return (true);
	// 		if (!isnumber(argv[i][0]) && !is_sign(argv[i][0]))
	// 			return (true);
	// 	}
	// }

	return (false);
}

int	operation(char operation, int first, int second)
{
	if (operation == '+')
		return (first + second);
	if (operation == '-')
		return (second - first);
	if (operation == '*')
		return (first * second);
	if (operation == '/')
		return (second / first);
	return -1;
}

// bool	test(std::string str, std::stack<int> data)
// {
// 	if (str.find(" ") > 1)
// 		return (false);
// 	if (is_sign(str[0]) && data.size() > 1)
// 		return true;
// 	if (isnumber(str[0]))
// 		return true;
// 	return false;
// }

void	reversePolishNotation(std::string stringy)
{
	int i = 0;
	int oldTop = 0;
	int result = -2;
	std::stack<int> data;

	PRINT << GREEN "before loop" << RESET_LINE;
	while (i++ < argc && argv[i])
	{
		if (!is_sign(argv[i][0]))
			data.push(atoi((const char *)argv[i]));
		else
		{
			oldTop = data.top();
			data.pop();
			result = operation(argv[i][0], oldTop, data.top());
			data.top() = result;
		}
		PRINT << GREEN "Current top: " SKY << data.top() << GREEN ",  Argument: " SKY<< argv[i] << RESET_LINE;
	}
		PRINT << GREEN "result " SKY << data.top()<< RESET_LINE;
}

