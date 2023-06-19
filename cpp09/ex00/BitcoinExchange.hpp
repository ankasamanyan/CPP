#pragma once
#include "Utils.hpp"
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, int>	_map;
		
	public:
		BitcoinExchange();
		BitcoinExchange(std::string &fileName);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
};

bool isValidFile(std::string stringy);

