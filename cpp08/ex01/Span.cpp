#include "Span.hpp"

/* constructors */

Span::Span()
{
}

Span::Span(unsigned int amount)
{
	_amount = amount;
	_values.reserve(_amount);
	_longestSpan = 0;
	_shortestSpan = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (_values.empty() == false)
		_values.clear();
	_amount = copy._amount;
	_values = copy._values;
	_longestSpan = copy._longestSpan;
	_shortestSpan = copy._shortestSpan;
	return(*this);
}

Span::~Span()
{
}

/* member funcyions */

void Span::addNumber(int number)
{
	if (_values.size() < _amount)
		_values.push_back(number);
	else throw TooManyElements();
}

int	Span::longestSpan()
{
	std::sort(_values.begin(), _values.end());
	_longestSpan = *(_values.end() - 1) - *(_values.begin());
	// std::cout << GREEN << _longestSpan << RESET_LINE;
	return(_longestSpan);
}

int	Span::shortestSpan()
{
	std::sort(_values.begin(), _values.end());
	if(_values.size() > 1)
		_shortestSpan = _values[1] - _values[0];
	// std::cout << PURPLE << _shortestSpan << RESET_LINE;
	return(_shortestSpan);
}
