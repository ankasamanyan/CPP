#include "Brain.hpp"

Brain::Brain()
{
	std::cout << YELLOW << "Default Brain constructor called" << RESET_LINE;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << YELLOW << "Copy Brain constructor called" << RESET_LINE;
}

Brain	&Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << YELLOW << "Brain destructor called" << RESET_LINE;
}

std::string &Brain::getIdea(int index)
{
	return(_ideas[index]);
}