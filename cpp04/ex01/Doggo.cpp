#include "Doggo.hpp"

Doggo::Doggo()
{
	_doggoBrain = new Brain;
	_type = "Doggo";
	std::cout << GREEN << "Default Doggo constructor called" << RESET_LINE;
}

Doggo::Doggo(const Doggo &copy)
{
	*this = copy;
	std::cout << GREEN << "Copy Doggo constructor called" << RESET_LINE;
}

Doggo	&Doggo::operator=(const Doggo &copy)
{
	_type = copy._type;
	return (*this);
}

Doggo::~Doggo()
{
	delete(_doggoBrain);
	std::cout << GREEN << "Doggo destructor called" << RESET_LINE;
}

void	Doggo::makeSound() const
{
	std::cout << GREEN << "* Depressed Doggo sounds *" << RESET_LINE; 
}

void	Doggo::setIdea(int index, std::string	idea)
{
	if (index < 100)
		_doggoBrain->getIdea(index) = idea;
	else
		std::cout << PINK << "Your index does not exist" << RESET_LINE;
}

std::string	Doggo::getIdea(int index)
{
	if (index < 100)
			return(_doggoBrain->getIdea(index));
		else
			return("Your index does not exist");
}