#ifndef ITER_HPP
	#define ITER_HPP
#include <iostream>
#include "Colours.h"

template <typename T>
void	iter(T	*array, int size, void(*func)(T &elem))
{
	for (int i = 0; i < size; i++)
		(*func)(array[i]);
}

/* Print functionf for strings (for testing) */
void	printStringy(std::string	&stringy)
{
	std::cout << PURPLE << ">> " << GREEN << stringy << RESET_LINE;
}

/* Print functionf for int (for testing) */
void	printInt(int	&i)
{
	std::cout << PURPLE << ">> " << YELLOW << i << RESET_LINE;
}

/* Increase functionf for int (for testing) */
void	increasetInt(int	&i)
{
	std::cout << PURPLE << "++ " << SKY << ++i << RESET_LINE;
}

#endif