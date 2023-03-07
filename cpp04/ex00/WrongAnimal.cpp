#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Just Wrong Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	_type = copy._type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
}

const	std::string &WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << SKY << "* Depressed WrongAnimal sounds *" << RESET_LINE; 
}