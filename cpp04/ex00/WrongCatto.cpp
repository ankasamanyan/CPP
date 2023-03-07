#include "WrongCatto.hpp"

WrongCatto::WrongCatto()
{
	_type = "WrongCatto";
	std::cout << PURPLE << "Default WrongCatto constructor called" << RESET_LINE;
}

WrongCatto::WrongCatto(const WrongCatto &copy)
{
	*this = copy;
	std::cout << PURPLE << "Copy WrongCatto constructor called" << RESET_LINE;
}

WrongCatto	&WrongCatto::operator=(const WrongCatto &copy)
{
	_type = copy._type;
	return (*this);
}

WrongCatto::~WrongCatto()
{
	std::cout << PURPLE << "WrongCatto destructor called" << RESET_LINE;
}

void	WrongCatto::makeSound() const
{
	std::cout << PURPLE << "* Depressed WrongCatto sounds *" << RESET_LINE; 
}