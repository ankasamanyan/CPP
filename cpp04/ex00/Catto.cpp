#include "Catto.hpp"

Catto::Catto()
{
	_type = "Catto";
	std::cout << PURPLE << "Default Catto constructor called" << RESET_LINE;
}

Catto::Catto(const Catto &copy)
{
	*this = copy;
	std::cout << PURPLE << "Copy Catto constructor called" << RESET_LINE;
}

Catto	&Catto::operator=(const Catto &copy)
{
	_type = copy._type;
	return (*this);
}

Catto::~Catto()
{
	std::cout << PURPLE << "Catto destructor called" << RESET_LINE;
}

void	Catto::makeSound() const
{
	std::cout << PURPLE << "* Depressed Catto sounds *" << RESET_LINE; 
}