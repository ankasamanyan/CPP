#include "Doggo.hpp"

Doggo::Doggo()
{
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
	std::cout << GREEN << "Doggo destructor called" << RESET_LINE;
}

void	Doggo::makeSound() const
{
	std::cout << GREEN << "* Depressed Doggo sounds *" << RESET_LINE; 
}