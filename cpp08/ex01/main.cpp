#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
	sp.addNumber(12);
	}
	catch(const std::exception& e)
	{
	std::cerr << e.what() << '\n';
	}
	std::cout << PURPLE << "Shortest Span:   " << GREEN << sp.shortestSpan() << std::endl;
	std::cout << PURPLE << "Longest Span:    " << GREEN << sp.longestSpan() << std::endl;
	return 0; 
}