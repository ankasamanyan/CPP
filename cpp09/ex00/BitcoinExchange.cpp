#include "BitcoinExchange.hpp"

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
			addToMap(date, rate);
		}
	}
	else
	{
		Utils::printMsg("No Database!", ORANGE);
		return ;
	}
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
	if (stringy.substr(stringy.find('.')+1).compare("csv") == 0)
		return (true);
	return (false);
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
		if (wrongFirstLine(inputFile, line))
			return ;
		while(std::getline(inputFile, line))
		{
			if(line.compare("date | value") == 0 || line.size() < 14)
				continue;
			date = line.substr(0,10);
			if (invalidDate(date))
				continue;
			value = std::strtod(line.substr(line.find('|')+1).c_str(), &str);
			if (invalidValue(value))
				continue;
			if (line.size() < 14 || ifWrongFormat(line))
			{
				PRINT << PURPLE <<"Error:"<< GREEN <<" bad input";
				PRINT << PURPLE << " => " << GREEN << line << RESET_LINE;
				continue;
			}
			printOutput(date, value);
		}
	}
	else
	{
		Utils::printMsg("Something wrong with your file", YELLOW);
		return ;
	}
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
		else
		{
			PRINT << PURPLE <<"Error:"<< GREEN <<" bad input";
			PRINT << PURPLE << " => " << GREEN << date << RESET_LINE;
		}
		dataBase.erase(date);
	}
}

bool	BitcoinExchange::invalidDate(std::string date)
{
	int	year	= std::strtod(date.substr(0,4).c_str(), NULL);
	int	month	= std::strtod(date.substr(5,2).c_str(), NULL);
	int	day		= std::strtod(date.substr(8,2).c_str(), NULL);

	if ((date.size() != 10)  || year < 2009 || month < 1 || day < 1 
		||  year > 2023 || month > 12 || (!(month%2) && day > 30)
		|| ((month%2) && day > 31) || day > 31 || (month == 2 && day > 28))
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" bad input";
		PRINT << PURPLE << " => " << GREEN << date << RESET_LINE;
		return (true);
	}
	return (false);
}

bool	BitcoinExchange::invalidValue(double value)
{
	if (value < 0)
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" not a positive number." << RESET_LINE;
		return (true);
	}
	if (value > 1000)
	{
		PRINT << PURPLE <<"Error:"<< GREEN <<" too large number." << RESET_LINE;
		return (true);
	}
	return (false);
}

bool	BitcoinExchange::ifWrongFormat(std::string line)
{
	std::string	year	= line.substr(0,4);
	std::string	month	= line.substr(5,2);
	std::string	day		= line.substr(8,2);
	std::string value	= line.substr(13);
		 /* "yyyy-mm-dd | value" */
	if(Utils::strCheck(year, isnumber) && (line.substr(4,1).compare("-") == 0)
		&& Utils::strCheck(month, isnumber) && (line.substr(7,1).compare("-") == 0)
		&& Utils::strCheck(day, isnumber) && (line.substr(10,3).compare(" | ") == 0)
		&& (Utils::detectDouble(value) || Utils::detectInt(value)))
		return (false);
	return (true);
}

bool	BitcoinExchange::wrongFirstLine(std::ifstream &inputFile, std::string &line)
{
	std::getline(inputFile, line);

	if (line.compare("date | value"))
	{
		Utils::printMsg("File has incorrect format", ORANGE);
		PRINT << YELLOW << "    Your flie must start with: ";
		PRINT << ORANGE << "\"date | value\"" << RESET_LINE << RESET_LINE;
		inputFile.close();
		return (true);
	}
	return (false);
}
