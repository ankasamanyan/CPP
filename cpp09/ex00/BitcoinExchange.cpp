#include "BitcoinExchange.hpp"

// You have to create a program which outputs the value of a certain amount of bitcoin on a certain date.

// This program must use a database in csv format which will represent bitcoin price over time. This database is provided with this subject.

// The program will take as input a second database, storing the different prices/dates to evaluate.

// Your program must respect these rules:
// • The program name is btc.
// • Your program must take a file as argument.
// • Each line in this file must use the following format: "date | value".
// • A valid date will always be in the following format: Year-Month-Day.
// • A valid value must be either a float or a positive integer between 0 and 1000.

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::BitcoinExchange(std::string &fileName)
{
	std::ifstream	inputFile(fileName);
	std::string		line;
	

	if (inputFile.is_open())
	{
		while(std::getline(inputFile, line))
		{
			if(line.compare("date,exchange_rate"))
				continue ;
			
		}
	}
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{  
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

/*      */



/*      */

bool isValidFile(std::string stringy)
{
	if (stringy.substr(stringy.find('.')/* + 1 */, 3).compare("cvs") == 0)
		return true;
	else false;
}
