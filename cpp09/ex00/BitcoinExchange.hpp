#pragma once
#include "Utils.hpp"
#include <iostream>
#include <fstream>
#include <map>

#define MAP std::map<std::string,double> 
class BitcoinExchange
{
	private:
		std::map<std::string, double>	_dataBase;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string dataBase, std::string inputFile);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		/*	*/
		void	addToMap(std::string date, double rate);
		void	parseTheFile(std::string input);
		void	printOutput(std::string date, double value);
		bool	invalidDate(std::string date);
		bool	invalidValue(double value);
		bool	ifWrongFormat(std::string line);
		bool	wrongFirstLine(std::ifstream &inputFile, std::string &line);
};

bool	isValidFile(std::string stringy);

