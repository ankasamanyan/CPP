#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printMsg("WRONG ARG.COUNT", PINK);
		return 0;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
