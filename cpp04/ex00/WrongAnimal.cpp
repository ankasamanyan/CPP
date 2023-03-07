#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Just Wrong Animal";
	std::cout << SKY << "Default WrongAnimal constructor called" << RESET_LINE;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << SKY << "Copy WrongAnimal constructor called" << RESET_LINE;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	_type = copy._type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << SKY << "WrongAnimal destructor called" << RESET_LINE;
}

const	std::string &WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << SKY << "* Depressed WrongAnimal sounds *" << RESET_LINE; 
}