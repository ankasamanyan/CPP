#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "Just AAnimal";
	std::cout << SKY << "Default AAnimal constructor called" << RESET_LINE;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << SKY << "Copy AAnimal constructor called" << RESET_LINE;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	_type = copy._type;
	return(*this);
}

AAnimal::~AAnimal()
{
	std::cout << SKY << "AAnimal destructor called" << RESET_LINE;
}

const	std::string &AAnimal::getType() const
{
	return(_type);
}

void	AAnimal::makeSound() const
{
	std::cout << SKY << "* Depressed AAnimal sounds *" << RESET_LINE; 
}