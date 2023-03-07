#include "Animal.hpp"

Animal::Animal()
{
	_type = "Just animal";
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal	&Animal::operator=(const Animal &copy)
{
	_type = copy._type;
	return(*this);
}

Animal::~Animal()
{
}

const	std::string &Animal::getType() const
{
	return(_type);
}

void	Animal::makeSound() const
{
	std::cout << SKY << "* Depressed animal sounds *" << RESET_LINE; 
}