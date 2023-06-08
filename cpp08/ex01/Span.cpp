#include "Span.hpp"

/* constructors */

Span::Span()
{
}

Span::Span(unsigned int amount)
{
	if (amount > 0)
	{
		_amount = amount;
		_values.reserve(_amount);
		_longestSpan = 0;
		_shortestSpan = 0;
	}
	else throw EmptyArrayException();
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

/* member functions */

void Span::addNumber(int number)
{
	if (_amount > 0)
	{
		if (_values.size() < _amount)
			_values.push_back(number);
		else throw TooManyElementsException();
	}
	else throw EmptyArrayException();
}

int	Span::longestSpan()
{
	if (_values.empty())
		throw NoSpanFoundException();
	else if (_amount > 0)
	{
		std::sort(_values.begin(), _values.end());
		_longestSpan = *(_values.end() - 1) - *(_values.begin());
		return(_longestSpan);
	}
	else if (_amount == 0)
		throw EmptyArrayException();
	else if (_values.size() < 2)
		throw NoSpanFoundException();
	return 0;
}

int	Span::shortestSpan()
{
	int min = INT_MAX;
	if (_values.empty())
		throw NoSpanFoundException();
	else if (_amount > 0)
	{
		std::vector<int>::iterator begin = _values.begin();
		std::vector<int>::iterator end = _values.end();
		std::sort(begin, end);
		if(_values.size() > 1)
		{
			while  (begin != end)
			{
				if ((begin + 1)!= end && *(begin + 1) - *begin < min)
					min = *(begin + 1) - *begin;
				begin++;
			}
		}
		return(_shortestSpan = min);
	}
	else if (_amount == 0)
		throw EmptyArrayException();
	return(_shortestSpan);
}

void Span::addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_amount > 0)
	{
		while (begin != end)
		{
			try
			{
				addNumber(*begin);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				break;
			}
			begin++;
		}
	}
	else throw EmptyArrayException();
}
