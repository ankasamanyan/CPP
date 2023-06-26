#include "BitcoinExchange.hpp"



int main(int argc, char** argv) 
{
	if (argc != 2)
	{
		Utils::printMsg("Error: could not open file.", YELLOW);
		return (-1);
	}
	BitcoinExchange btc("data.csv", argv[1]);
	if (!isValidFile(argv[1]))
	{
		Utils::printMsg("Invalid file!", PINK);
		return (-1);
	}
	return 0;
}