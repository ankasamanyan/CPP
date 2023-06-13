#include "BitcoinExchange.hpp"

int main(int argc, char** argv) 
{
	// std::ifstream input;
	if (argc != 2)
	{
		Utils::printMsg("Wrong number of arguments", YELLOW);
		return (-1);
	}
	if (!isValidFile(argv[1]))
	{
		Utils::printMsg("Invalid file!", PINK);
		return (-1);
	}
	
	return 0;
}