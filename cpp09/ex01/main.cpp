#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		Utils::printMsg("Wrong amount of arguments!", ORANGE);
		return (-1);
	}
	std::string	stringy(argv[1]);
	if(inValidInput(stringy))
	{
		Utils::printMsg("Invalid Input!", YELLOW);
		return (-1);
	}
	reversePolishNotation(argv, argc);
	return (0);
}
