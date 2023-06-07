#ifndef SPAN_HPP
	#define SPAN_HPP
#include "Utils.hpp"
#include <vector>
#include <exception>
#include <stdlib.h>
#include <algorithm>

class Span
{
	private:
		int					_longestSpan;
		int					_shortestSpan;
		unsigned int		_amount;
		std::vector<int>	_values;
	/* private default constructor */
		Span();

	public:
		Span(unsigned int amount);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();
	/* public member funcyions */
		int	longestSpan();
		int	shortestSpan();
		void addNumber(int number);
		void addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	/* Exception */
	class TooManyElementsException: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m\t* There are too many Elements! *\033[0m");
		}
	};
	class EmptyArrayException: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m\t* You've created an empty array! *\033[0m");
		}
	};
	class NoSpanFoundException: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m\t* No span can be found! *\033[0m");
		}
	};

};

#endif