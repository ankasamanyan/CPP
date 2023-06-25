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

BitcoinExchange::BitcoinExchange(std::string dataBase, std::string input)
{
	std::ifstream	data(dataBase);
	std::string		line;
	std::string		date;
	double			rate;
	char 			*str;
	if (data.is_open())
	{
		while(std::getline(data, line))
		{
			if(line.compare("date,exchange_rate") == 0)
				continue;
			date = line.substr(0, 10);
			rate = std::strtod(line.substr(line.find(',') + 1, line.size() - line.find(',')).c_str(), &str);
			// std::cout << GREEN << i++ << PURPLE << " " << date << ": " << GREEN << rate << RESET_LINE;
			addToMap(date, rate);
		}
	}
	else
		Utils::printMsg("Something wrong with your file", YELLOW);
	parseTheFile(input);
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{  
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	dataBase = copy.dataBase;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::addToMap(std::string date, double rate)
{
	dataBase.insert(std::make_pair(date, rate));
}

/*      */

bool	isValidFile(std::string stringy)
{
	if (stringy.substr(stringy.find('.')+1).compare("txt") == 0)
		return true;
	else 
		return false;
}

void	BitcoinExchange::parseTheFile(std::string input)
{
	std::ifstream	inputFile(input);
	std::string		line;
	std::string		date;
	double			value;
	char			*str;

	if (inputFile.is_open())
	{
		while(std::getline(inputFile, line))
		{
			if(line.compare("date | value") == 0)
				continue;
			date = line.substr(0,10); //check if the date is valid
			if (line.size() < 14)
			{
				PRINT << PURPLE <<"Error:"<< GREEN <<" bad input";
				PRINT << PURPLE << " => " << GREEN << line << RESET_LINE;
				continue;
			}
			if (invalidDate(date))
				continue;
			value = std::strtod(line.substr(line.find('|')+1).c_str(), &str); //check if the value is valid
			if (invalidValue(value))
				continue;
			printOutput(date, value);
		}
	}
	else
		Utils::printMsg("Something wrong with your file", YELLOW);
}

void	BitcoinExchange::printOutput(std::string date, double value)
{
	if(dataBase.find(date) != dataBase.end())
	{
		PRINT << GREEN << date << PURPLE << " => ";
		PRINT << GREEN << value << PURPLE << " = ";
		PRINT << GREEN << value * dataBase.find(date)->second << RESET_LINE;
	}
	else
	{
		std::pair<MAP::iterator, bool>  index;
		index = dataBase.insert(std::make_pair(date,1));
		MAP::iterator tmp = index.first;
		if(index.first != dataBase.begin())
		{
			PRINT << GREEN << date << PURPLE << " => ";
			PRINT << GREEN << value << PURPLE << " = ";
			PRINT << GREEN << value * dataBase.find((*(--tmp)).first)->second << RESET_LINE;
		}
		dataBase.erase(date);
	}
}

bool	BitcoinExchange::invalidDate(std::string date)
{
	int	year	= std::strtod(date.substr(0,4).c_str(), NULL);
	int	month	= std::strtod(date.substr(5,2).c_str(), NULL);
	int	day		= std::strtod(date.substr(8,2).c_str(), NULL);

	if ((date.size() != 10) ||  year > 2023 || month > 12 || ((month%2) && day > 30)
		|| ((month%2) && day > 31) || (month == 8 && day > 28))
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" bad input";
		PRINT << PURPLE << " => " << GREEN << date << RESET_LINE;
		return (true);
	}
	return false;
}

bool	BitcoinExchange::invalidValue(double value)
{
	// (void)value;
	if (value < 0)
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" not a positive number." << RESET_LINE;
		return (true);
	}
	if (value > INT32_MAX)
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" too large number." << RESET_LINE;
		return (true);
	}
	return (false);
}
