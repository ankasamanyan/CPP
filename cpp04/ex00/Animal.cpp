#include "Animal.hpp"

Animal::Animal()
{
	_type = "Just animal";
	std::cout << SKY << "Default Animal constructor called" << RESET_LINE;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << SKY << "Copy Animal constructor called" << RESET_LINE;
}

Animal	&Animal::operator=(const Animal &copy)
{
	_type = copy._type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << SKY << "Animal destructor called" << RESET_LINE;
}

const	std::string &Animal::getType() const
{
	return(_type);
}

void	Animal::makeSound() const
{
	std::cout << SKY << "* Depressed animal sounds *" << RESET_LINE; 
}