#pragma once
#include "Utils.hpp"
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_dataBase;
		
	public:
		BitcoinExchange();
		BitcoinExchange(std::string fileName);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		/*	*/
		void	addToMap(std::string date, double rate);
};

bool isValidFile(std::string stringy);

