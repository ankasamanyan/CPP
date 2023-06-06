#ifndef SPAN_HPP
	#define SPAN_HPP
#include "Utils.hpp"
#include <vector>
#include <exception>
// #include <algorithm>

class Span
{
	private:
	/* private constructor */
		Span();
	/* private variables */
		int					_longestSpan;
		int					_shortestSpan;
		unsigned int		_amount;
		std::vector<int>	_values;

	public:
	/* public constructor */
		Span(unsigned int amount);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();
	/* public member funcyions */
		int	longestSpan();
		int	shortestSpan();
		void addNumber(int number);
		// void

	/* Exception */
	class TooManyElements: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m* There are too many Elements! *\033[0m");
		}
	};

};

#endif