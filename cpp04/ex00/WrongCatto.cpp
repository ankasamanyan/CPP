#include "WrongCatto.hpp"

WrongCatto::WrongCatto()
{
	_type = "WrongCatto";
}

WrongCatto::WrongCatto(const WrongCatto &copy)
{
	*this = copy;
}

WrongCatto	&WrongCatto::operator=(const WrongCatto &copy)
{
	_type = copy._type;
	return (*this);
}

WrongCatto::~WrongCatto()
{
}

void	WrongCatto::makeSound() const
{
	std::cout << PURPLE << "* Depressed WrongCatto sounds *" << RESET_LINE; 
}