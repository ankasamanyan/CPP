#include "RPN.hpp"

bool	is_sign(char element)
{
	if (element == '+' || element == '-' || element == '/' || element == '*')
		return (true);
	return (false);
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
	}
		if (digitCount - signCount != 1 || digitCount == 1)
			return (true);
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

bool	reversePolishNotation(std::string stringy)
{
	int oldTop = 1;
	int result = -2;
	std::stack<int> data;

	for (std::string::iterator it = stringy.begin(); it != stringy.end(); it++)
	{
		while (*it == ' ' && it+1 != stringy.end())
			it++;
		if (it + 1 == stringy.end() && *(stringy.end() - 1) == ' ')
			break;
		if(!is_sign(*it))
			data.push(atoi(&*it));
		else if (is_sign(*it))
		{
			if (data.size() < 2)
				return (false);
			oldTop = data.top();
			data.pop();
			result = operation(*it, oldTop, data.top());
			data.top() = result;
		}
	}
	if (data.size() != 1)
		return (false);
	PRINT << GREEN "Result: " SKY << data.top()<< RESET_LINE;
	return (true);
}

