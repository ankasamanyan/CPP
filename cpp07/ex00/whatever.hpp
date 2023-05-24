#ifndef WHATEVER_HPP
	#define	WHATEVER_HPP
#include <iostream>
#include "Colours.h"

template	<typename T>
void	swap(T &first, T &second)
{
	T temp = first;
	first = second;
	second = temp;
}

template	<typename T>
T&	max(T& first, T& second)
{
	return (second < first ? first : second);
}

template	<typename T>
T&	min(T& first, T& second)
{
	return (second > first ? first : second);
}

template	<typename T>
void	printThings(T& i, T& j)
{
	std::cout << std::string(50, '-') << RESET_LINE;
	std::cout << PURPLE << "The values for comparison:\t" << GREEN << i << ", " << j << RESET_LINE << std::string(50, '-') << RESET_LINE;
	std::cout << PURPLE << "The bigger value: \t\t " << GREEN << max(i, j) << RESET_LINE;
	std::cout << PURPLE << "The smaller value: \t\t " << GREEN << min(i, j) << RESET_LINE << RESET_LINE;
}

#endif