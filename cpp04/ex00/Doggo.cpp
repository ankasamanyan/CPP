#include "Doggo.hpp"

Doggo::Doggo()
{
	_type = "Doggo";
}

Doggo::Doggo(const Doggo &copy)
{
	*this = copy;
}

Doggo	&Doggo::operator=(const Doggo &copy)
{
	_type = copy._type;
	return (*this);
}

Doggo::~Doggo()
{
}

void	Doggo::makeSound() const
{
	std::cout << GREEN << "* Depressed Doggo sounds *" << RESET_LINE; 
}